
#pragma once
#include <iostream>
#include "range.hpp"
//https://arne-mertz.de/2017/01/decltype-declval/
//https://www.includehelp.com/cpp-programs/print-all-possible-subset-of-a-set.aspx

using namespace std;

namespace itertools{
template <typename T>  class powerset{

private:
T _bin;


template <typename R> class iterator {

    private:
       R iter1;
       R iter2;

    public:

       iterator(R it1 , R it2):iter1(it1), iter2(it2){}
       iterator<R>& operator++() {++(*iter1);return *this;}
       iterator<R>& operator++(int) {iterator tmp(*this); operator++(); return tmp;}
       bool operator==(const iterator<R> other) const {return iter1 == other.iter1;}
       bool operator!=(const iterator<R> other) const {return iter1 != other.iter1;}
       decltype(*iter1) operator*() {return *iter1;}
       
    };

public:

powerset(T _bin): _bin(_bin){};  
auto begin() { return iterator<decltype(_bin.begin())> (_bin.begin(), _bin.begin()); }
auto end() { return iterator<decltype(_bin.end())> (_bin.end(), _bin.end());}

};
}
