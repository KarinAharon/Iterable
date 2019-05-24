#pragma once
#include <iostream>
#include "range.hpp"
//https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
//https://stackoverflow.com/questions/21481466/iterator-category-and-decltype
namespace itertools{

template <typename R, typename T> 
class chain{

private:
const R r_bin;
const T t_bin;


template <typename U, typename W> class iterator {

    private:
        U iter1;
        W iter2;
        bool firstIter;

    public:
        
       iterator(const U &it1 ,const W &it2):iter1(it1), iter2(it2) , firstIter(true){}
       iterator<U,W>& operator++() {
           if(firstIter) ++(iter1);
           else ++(iter2);
           return *this;
       }
     //  iterator<U,W>& operator++(int) {iterator tmp(*this); operator++(); return tmp;}
      // bool operator==(const iterator<U,W> other) const {return iter1 == other.iter1;}
       bool operator!=(const iterator<U,W> other) const {
            if(firstIter && !(it1 != it.it1)) firstIter = false;
            if(firstIter) return it1 != other.it1;
            else return it2 != other.it2;
       }
       auto &operator*() const {
           if(firstIter) return *iter1;
           return *iter2;
       }


    };

public:
chain(R r, T t ): r_bin(r), t_bin (t){};
auto begin() const {  return iterator<decltype(r_bin.begin()),decltype(t_bin.begin())> (r_bin.begin(), t_bin.begin()); }
auto end() const { return iterator<decltype(r_bin.end()),decltype(t_bin.end())> (r_bin.end(), t_bin.end()); }

};
}
