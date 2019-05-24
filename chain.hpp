#pragma once
#include <iostream>
#include "range.hpp"
//https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
//https://stackoverflow.com/questions/21481466/iterator-category-and-decltype
namespace itertools{

template <typename R, typename T> 
class chain{

private:
const R r_bin;
const T t_bin;


template <typename U, typename W> class iterator {

private:
U iter1;
W iter2;
bool still_iter1;

public:
        
iterator(U it1 ,W it2):iter1(it1), iter2(it2), still_iter1(true){}

iterator<U,W>& operator++() {
if (still_iter1) ++(iter1);
else ++(iter2);
return *this;
}

iterator<U,W>& operator++(int) {
iterator tmp(*this); operator++(); 
return tmp;
}


bool operator==( iterator<U,W> other)  {
if ((still_iter1 == true) && (iter1 == other.iter1))
still_iter1 = false;
if (still_iter1==true)
return (iter1 == other.iter1);
else
return (iter2 == other.iter2);
}


bool operator!=( iterator<U,W> other)  {
if ((still_iter1 == true) && !(iter1 != other.iter1)){
still_iter1 = false;                                                                                                  
}
if (still_iter1==true){
return (iter1 != other.iter1);
}
else{
return (iter2 != other.iter2);
}
}

decltype(*iter1) &operator*() const {
if (still_iter1)
return *iter1;
else 
return *iter2;
}

};

public:
chain(R r, T t ): r_bin(r), t_bin (t){};
auto begin() const {  return iterator<decltype(r_bin.begin()),decltype(t_bin.begin())> (r_bin.begin(), t_bin.begin()); }
auto end() const { return iterator<decltype(r_bin.end()),decltype(t_bin.end())> (r_bin.end(), t_bin.end()); }

};
}
