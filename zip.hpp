#pragma once
#include <iostream>
#include "range.hpp"
using namespace std;

namespace itertools{
 template <typename T, typename R>class zip{

private:
T bin1;
R bin2;


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

zip(T b1, R b2): bin1(b1), bin2(b2){}
auto begin(){}
auto end(){}

};
}

