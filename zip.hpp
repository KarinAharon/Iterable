#pragma once
#include <iostream>
#include "range.hpp"
using namespace std;

namespace itertools{
 template <typename T, typename R>class zip{

private:
const T bin1;
const R bin2;


template <typename U, typename W> class iterator {

    private:
        U iter1;
        W iter2;

     public:
        
       iterator(const U &it1 , const W &it2):iter1(it1), iter2(it2){}
       iterator<U,W>& operator++() {
       ++(iter1);
       ++(iter2);
       return *this;}
       iterator<U,W>& operator++(int) {iterator tmp(*this); operator++(); return tmp;}
       bool operator==(const iterator<U,W> other) const {
       return (iter1 == other.iter1 || iter1 == other.iter1);}
       bool operator!=( iterator<U,W> other)  { 
       return (iter1 != other.iter1 || iter1 != other.iter1);}
       auto& operator*() {return *iter1;}
       
    };

public:

zip(T b1, R b2): bin1(b1), bin2(b2){}
auto begin()const {  return iterator<decltype(bin1.begin()),decltype(bin2.begin())>(bin1.begin(), bin2.begin()); }
auto end()const { return iterator<decltype(bin1.end()),decltype(bin2.end())>(bin1.end(), bin2.end()); }

};
template <typename X, typename Y> ostream& operator<<(ostream result, const zip<X,Y> z){
result<<z.bin1<<","<<z.bin2;
return result;
}  
}
