#ifndef __STACK_HPP__
#define __STACK_HPP__

#include <iostream>
#include <stdexcept>

using namespace std;

// Declare a constant MAX_SIZE and set it to 20.
const int MAX_SIZE = 20;

template <typename T>
class stack {
  private:
    T *data = nullptr;
    int size;             // stores the current number of elements in the stack. 

  public:
    /*
     constructs an empty stack
    */
    stack(); 

    /* inserts a new element (val) of type T
     (T could be integer or string) into the data.
     If the data array is full, this function should
     throw an overflow_error exception with error message
     "Called push on full stack."
    */
    void push(T val); 

    /* removes the last element from data.
     If the data array is empty, this function should
     throw an outofrange exception with error message
     "Called pop on empty stack."
    */
    T pop(); 

    /* returns the top element of stack (last inserted element).
     If stack is empty, this function should
     throw an underflow_error exception with error message
     "Called top on empty stack.".
    */
    T top();

    /* 
     returns true if the stack is empty otherwise it returns false.
    */
    bool empty(); 
};

#endif  // __STACK_HPP__