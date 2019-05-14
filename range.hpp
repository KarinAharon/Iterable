#pragma once
#include <iostream>//http://www.cplusplus.com/reference/iterator/iterator/
namespace itertools{

template <typename R> 
class range{

R start;
R stop;

public:
    
    class iterator {
    private:
       R iter;

    public:

       iterator(R iter) : iter(iter){}
       auto& operator++() {++(iter);return *this;}
       const iterator operator++(int) {
         iterator tmp(*this); 
         iter++;
         return tmp;}
       bool operator==(const iterator &other) const {return iter == other.iter;}
       bool operator!=(const iterator &other) const {return iter != other.iter;}
       auto& operator*() const {return iter;}


    };
    public:
    range(R _start, R _stop): start(_start), stop(_stop){};
    auto begin() { return range<R>::iterator(start); }
    auto end() { return range<R>::iterator(stop); }

    
};
}

