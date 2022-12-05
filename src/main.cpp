/* Given in CS-014-Lab 4 */
#include <iostream>
#include <string>
#include <stdexcept>
#include "stack.cpp"

using namespace std;

void display_test_options();

int main() {
    int test;
    do {  
        display_test_options();
        cout << "Enter a test number(1-5) or any other digit to exit: ";
        cin >> test;
        cout << "------------------------------------------------------" << endl;

        switch (test) {
            case 1 :    //tests constructor, push, pop, top and empty
            {
                try{
                    cout << "stack1 constructor called";
                    stack<int> stack1;
      
                    if(stack1.empty()){
                        cout << "\nstack1 is empty.";
                    }
                    else{
                        cout << "\nstack1 is not empty";
                    }
      
                    cout << "\npush 10";
                    stack1.push( 10 );
      
                    cout << "\npush 20";
                    stack1.push( 20 );
      
                    cout << "\npush 30";
                    stack1.push( 30 );
      
                    cout << "\nstack1 top: ";
                    cout << stack1.top();
      
                    cout << "\npop";
                    stack1.pop();
      
                    cout << "\nstack1 top: ";
                    cout << stack1.top();
      
                    cout << "\npop";
                    stack1.pop();
      
                    cout << "\nstack1 top: ";
                    cout << stack1.top();
      
                    cout << "\npop";
                    stack1.pop();
      
                    if(stack1.empty()){
                        cout << "\nstack1 is empty.";
                    }
                    else{
                        cout << "\nstack1 is not empty";
                    }
                    cout << endl;
                }
                catch(underflow_error & e){
                    cout << e.what() << endl;
                }
                catch(overflow_error & e){
                    cout << e.what() << endl;
                }
                catch(out_of_range & e){
                    cout << e.what() << endl;
                }
                break;
            }
            case 2 :    //tests top on empty stack
            {  
                try{
                    cout << "stack2 constructor called";
                    stack<int> stack2;
  
                    cout << "\nstack2 top: ";
                    cout << stack2.top();
                    cout << endl;
                }
                catch(underflow_error & e){
                    cout << e.what() << endl;
                }
                catch(overflow_error & e){
                    cout << e.what() << endl;
                }
                catch(out_of_range & e){
                    cout << e.what() << endl;
                }
                break;
            }
            case 3 :    //tests pop from an empty stack
            {
                try{
                    cout << "stack3 constructor called";
                    stack<int> stack3;
  
                    cout << "\npop from empty stack\n";
                    stack3.pop();
                    cout << endl;
                }
                catch(underflow_error & e){
                    cout << e.what() << endl;
                }
                catch(overflow_error & e){
                    cout << e.what() << endl;
                }
                catch(out_of_range & e){
                    cout << e.what() << endl;
                }
                break;
            }
            case 4 :    //tests push to a full stack
            {
                try{
                    cout << "stack4 constructor called";
                    stack<int> stack4;
  
                    cout << "\npush 20 elements";
                    for(int i = 1; i <=20; ++i){
                        stack4.push(i);
                    }
      
                    cout << "\nstack4 top: ";
                    cout << stack4.top();
      
                    cout << "\npush 21\n";
                    stack4.push(21);
                    cout << endl;
                }
                catch(underflow_error & e){
                    cout << e.what() << endl;
                }
                catch(overflow_error & e){
                    cout << e.what() << endl;
                }
                catch(out_of_range & e){
                    cout << e.what() << endl;
                }        
                break;
            }
            case 5 :    //tests stack of strings
            {
                try{
                    cout << "stack5 constructor called";
                    stack<string> stack5;
    
                    cout << "\npush A";
                    stack5.push("A");
    
                    cout << "\npush B";
                    stack5.push("B");
    
                    cout << "\npush C";
                    stack5.push("C");
    
                    cout << "\nstack5 top: ";
                    cout << stack5.top();
    
                    cout << "\npop";
                    stack5.pop();
    
                    cout << "\nstack5 top: ";
                    cout << stack5.top();
    
                    cout << "\npop";
                    stack5.pop();
    
                    cout << "\nstack5 top: ";
                    cout << stack5.top();
    
                    cout << "\npop";
                    stack5.pop();
    
                    if(stack5.empty()){
                        cout << "\nstack5 is empty.";
                    }
                    else{
                        cout << "\nstack5 is not empty";
                    }

                    cout << "\nstack5 top: \n";
                    stack5.top();
                    cout << endl;
                }
                catch(underflow_error & e){
                    cout << e.what() << endl;
                }
                catch(overflow_error & e){
                    cout << e.what() << endl;
                }
                catch(out_of_range & e){
                    cout << e.what() << endl;
                }
                break;
            }
            default:    //exit tests 
            {
                cout << "Exit testing." << endl;
                break;
            }
        }
    
        cout << "------------------------------------------------------";
        cout << endl << endl;
    } while(test >= 1 && test <= 5);
    
    return 0;
}

void display_test_options() {
    cout << "Test options:" << endl;
    cout << " - Test 1: tests constructor, push, pop, top and empty." << endl;
    cout << " - Test 2: tests top on empty stack." << endl;
    cout << " - Test 3: tests pop from an empty stack." << endl;
    cout << " - Test 4: tests push to a full stack." << endl;
    cout << " - Test 5: tests stack of strings." << endl;
}