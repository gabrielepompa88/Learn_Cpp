// g++ -Wall -Wextra -Wpedantic -std=c++11 -o SubChap_8_3_quiz_Stack SubChap_8_3_quiz_Stack.cpp

#include <iostream>
#include <cassert> // for assert()

class Stack{

    static const int s_maxStackLength = 10;
    int stackArray[s_maxStackLength];
    int stackLength;
    
public:
    
    // reset
    void reset(){
    
        stackLength = 0; // set stack length to 0
        
        // set each element of the stack to 0
        for(int &frame: stackArray){frame = 0;}
        
    }
    
    // push
    bool push(int value){
    
        if(stackLength == s_maxStackLength){
            
            return false;
            
        } else{
            
            // set to value the last element on the stack and increment the length of the stack
            stackArray[stackLength++] = value;
            
            /*
            // Alternatively:
            
            // set to value the last element on the stack
            stackArray[stackLength] = value;
            
            // increment the length of the stack
            stackLength++;
            */
            
            return true;
        }
    }
    
    // pop
    int pop(){
    
        assert(stackLength > 0 && "There are no values on the stack");
        
        int popValue = stackArray[stackLength];
        
        // set to 0 the last element on the stack and decrement the length of the stack
        stackArray[stackLength--] = 0;

        /*
         // Alternatively:
         
        // set to zero the last element on the stack
        stackArray[stackLength] = 0;
        
        // decrement the length of the stack
        stackLength--;
        */
        
        return popValue;
        
    }
    
    // print
    void print(){
        
        std::cout << "(";

        for(int i=0; i<stackLength; ++i){
            std::cout << stackArray[i] << " ";
        }
        std::cout << ") \n";
        
    }

};

int main()
{
    Stack stack;
    stack.reset();
    
    stack.print();
    
    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();
    
    stack.pop();
    stack.print();
    
    stack.pop();
    stack.pop();
    
    stack.print();
    
    return 0;
}