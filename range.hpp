#pragma once
#include <iostream>
//http://www.cplusplus.com/reference/iterator/iterator/
namespace itertools{

template <typename R> 
class range{

R start;
R end;

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
    range(R s, R e): start(s), end(e){};
    auto begin() { return iterator(&start); }
    auto end() { return iterator(&end); }

    
};
}
