
#pragma once
#include <iostream>
#include "range.hpp"
using namespace std;

namespace itertools{
template <typename T, typename U> class product{

private:
T t_bin;
U u_bin;


template <typename R, typename W> class iterator {

    private:
       R iter1;
       W iter2;

    public:

       iterator(R it1 , W it2):iter1(it1), iter2(it2){}
       iterator<R,W>& operator++() {++(*iter1);return *this;}
       iterator<R,W>& operator++(int) {iterator tmp(*this); operator++(); return tmp;}
       bool operator==(const iterator<R,W> other) const {return iter1 == other.iter1;}
       bool operator!=(const iterator<R,W> other) const {return iter1 != other.iter1;}
       decltype(*iter1) operator*() {return *iter1;}
       
    };

public:

product(T b_1, U b_2): t_bin(b_1), u_bin(b_2){}
auto begin(){}
auto end(){}

};
}
