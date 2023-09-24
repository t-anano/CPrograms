#include <stdlib.h>
#include <stdio.h>
 
 // a static objects inside a function keeps its value between invocations 
 void increment(void){
   static unsigned int counter = 0; 
   counter++; 
   printf("%d\n", counter); 

 }

 // static objects must be initialized to a constant and not a variable 
 int* func(int i ){
    const int j = i; 
    static int k = 0; // expression must have a constant value because object is static 

 }

 int main(void){
    for(int i = 0; i < 5;i++){
       increment(); // as you can see, incrment is called 5 times and since counter is static it retains its value amongst invokations and goes from 0 to 5 as the funciton is called 5 times 
    }
    return 0; 
 }