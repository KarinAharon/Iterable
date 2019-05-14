#pragma once
#include <sstream>
#include <iostream>
//https://doc.qt.io/qt-5/qset-const-iterator.html#operator--gt
//http://www.cplusplus.com/reference/iterator/iterator/
namespace itertools{

template <typename R> 
class range{
const R start;
const R stop;

public: 
    class iterator {
    private:
        R iter;

    public:

       iterator(const R &iter) : iter(iter){}
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
    range(R _start , R _stop): start(_start), stop(_stop){};

    iterator begin() const { return range<R>::iterator(start); }
    iterator end() const { return range<R>::iterator(stop); }   
};
}






