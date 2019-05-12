#pragma once
#include <iostream>
#include "range.hpp"
//https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
//https://stackoverflow.com/questions/21481466/iterator-category-and-decltype
namespace itertools{

template <typename R, typename T> 
class chain{

private:
R r_bin;
T t_bin;


template <typename U, typename W> class iterator {

    private:
       U iter1;
       W iter2;

    public:
        
       iterator(U it1 , W it2):iter1(it1), iter2(it2){}
       iterator<U,W>& operator++() {++(*iter1);return *this;}
       iterator<U,W>& operator++(int) {iterator tmp(*this); operator++(); return tmp;}
       bool operator==(const iterator<U,W> other) const {return iter1 == other.iter1;}
       bool operator!=(const iterator<U,W> other) const {return iter1 != other.iter1;}
       decltype(*iter1) operator*() {return *iter1;}


    };

public:
chain(R r, T t ): r_bin(r), t_bin (t){};
auto begin() {  return iterator<decltype(r_bin.begin()),decltype(t_bin.begin())> (r_bin.begin(), t_bin.begin()); }
auto end()   { return iterator<decltype(r_bin.end()),decltype(t_bin.end())> (r_bin.end(), t_bin.end()); }

};
}
