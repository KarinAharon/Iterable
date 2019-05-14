#pragma once
#include <sstream>
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

    class const_iterator{
    private:
    R const_iter;
  
    public:
    const_iterator(R const_iter) :const_iterator(&const_iter){}
    auto& operator++() {++(const_iter);return *this;}
    const const_iterator operator++(int) {
         const_iterator tmp(*this); 
         const_iter++;
         return tmp;}
    bool operator==(const const_iterator &other) const{return const_iter == other.const_iter;}
    bool operator!=(const const_iterator &other) const{return const_iter != other.const_iter;}
    auto& operator*() const {return const_iter;}

};


    public:
    range(R _start, R _stop): start(_start), stop(_stop){};

    iterator begin() const { return range<R>::iterator(start); }
    iterator end() const { return range<R>::iterator(stop); }

    const_iterator cbegin() const noexcept { range<R>::const_iterator(start); }
    const_iterator cend() const noexcept { range<R>::const_iterator(stop); }

    
};
}


