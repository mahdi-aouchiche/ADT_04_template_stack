#ifndef __UNIT_TEST_HPP__
#define __UNIT_TEST_HPP__

#include "gtest/gtest.h"
#include "../src/stack.cpp"

TEST(Stack, empty_tests) {  
    stack<int> my_stack; 
    EXPECT_EQ(my_stack.empty(), true);

    my_stack.push(1);
    EXPECT_EQ(my_stack.empty(), false);  
}

TEST(Stack, push_tests) { 
    stack<char> my_stack; 
    char c = 'a';

    // Stack less than maximum size
    for(unsigned int i = 0; i < MAX_SIZE; i++) {
        EXPECT_NO_THROW(my_stack.push(c++));
    }
   
    // stack at maximum size
    EXPECT_THROW(my_stack.push(c), overflow_error); 
    
    // overflow error message
    try
    {
        my_stack.push(c);
    }
    catch(const std::exception& e)
    {
        EXPECT_STREQ( e.what(), "Called push on full stack.");
    }  
}

TEST(Stack, pop_tests) { 
    stack<int> my_stack;   
    
    // Stack starts out empty
    EXPECT_THROW(my_stack.pop(), out_of_range);

    // Out of range error message
    try
    {
        my_stack.pop();
    }
    catch(const std::exception& e)
    {
        EXPECT_STREQ( e.what(), "Called pop on empty stack.");
    }  

    // Fill the Stack 
    for(unsigned int i = 0; i < MAX_SIZE; i++) {
        my_stack.push(i);
    }

    for(unsigned int i = 0; i < MAX_SIZE; i++) {
        EXPECT_NO_THROW(my_stack.pop());
    }

    // stack is empty
    EXPECT_THROW(my_stack.pop(), out_of_range);
}

TEST(Stack, top_tests) { 
    stack<char> my_stack;   
    
    // Stack starts out empty
    EXPECT_THROW(my_stack.top(), underflow_error);

    // Fill the Stack 
    char c = 'a';
    for(unsigned int i = 0; i < MAX_SIZE; i++) {
        my_stack.push(c);
        c++;
    }

    // Empty the stack and check top
    for(unsigned int i = 0; i < MAX_SIZE; i++) {
        c--;
        EXPECT_EQ(my_stack.top(), c);
        my_stack.pop();
    }

    // stack is empty expect an underflow_error message 
    try
    {
        my_stack.top();
    }
    catch(const std::exception& e)
    {
        EXPECT_STREQ( e.what(), "Called top on empty stack.");
    }  
}

#endif // __UNIT_TEST_HPP__