#pragma once
#include <iostream>
//http://www.cplusplus.com/reference/iterator/iterator/
namespace itertools{

template <typename R> 
class range{

R bin1;
R bin2;

public:
    
    class iterator {
    private:
       R* iter;

    public:

       iterator(R* iter) : iter(iter){}
       iterator& operator++() {++(*iter);return *this;}
       iterator operator++(int) {iterator tmp(*this); operator++(); return tmp;}
       bool operator==(const iterator &other) const {return *iter == *other.iter;}
       bool operator!=(const iterator &other) const {return *iter != *other.iter;}
       R& operator*() {return *iter;}


    };
    public:
    range(R bin1, R bin2){}
    auto begin() { return iterator(&bin1); }
    auto end() { return iterator(&bin2); }

    
};
}

