#include "../header/stack.hpp"

template<typename T>
stack< T >::stack()
{
  this->size = 0;                  // set size to 0
  this->data = new T [MAX_SIZE];   // Declare an array of type T and size MAX_SIZE 
}

template<typename T>
void stack< T >::push(T val) {

  // throw an overflow exception if stack is full
  if (this->size >= MAX_SIZE) {
    throw overflow_error("Called push on full stack.");
  }
  
  this->data [this->size] = val ;   // assign val to the end of data  
  this->size ++ ;                   // increment the size
} 

template<typename T>
T stack< T >::pop() {

  // throw an out_of_range exception if stack is empty 
  if ( this->empty() ) {
    throw out_of_range("Called pop on empty stack.");
  }
  
  this->size-- ;          // decrement the size

  // return the last element from the stack
  return this->data [this->size] ;  
}

template<typename T>
T stack< T >::top() {
  // throw an underflow exception if stack is empty 
  if ( this->empty() ) {
    throw underflow_error("Called top on empty stack.");
  }
  
  // return the last element from the stack
  return this->data[this->size - 1] ;
}

template<typename T>
bool stack< T >::empty() {
  if (size <= 0) {
    return true;
  } else {
    return false;
  }
}