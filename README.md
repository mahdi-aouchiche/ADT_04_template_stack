# Abstact Data Types : template stack

Author: Mahdi Aouchiche (<https://github.com/mahdi-aouchiche/ADT_04_template_stack>)

* Example of using template class to create a stack which can hold type T.
* Implement a push function which inserts a new element (val) of type T to the stack. If the stack is full, the function throws an overflow error exception.
* Implement a pop function which removes the last element from the stack. If the stack is empty, the function throws an out of range exception.
* Implement a top function which returns the top element of stack (last inserted element). If stack is empty, this function throws an underflow_error exception.
* Implement an empty function which returns true if the stack is empty otherwise it returns false.
* Test the correcteness of the functions using standard output in main.
* Use google unit tests to automate the tests for each function and exeception handeling.

## To run the project nicely run the following commands

```c++
cmake -S . -B build
cmake --build build/ 
```

## 2 executables are created, use the following commands to run an executable

```c++
// run the unit tests
./build/stack_test

// run the code
./build/my_stack
```
