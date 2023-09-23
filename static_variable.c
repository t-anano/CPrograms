#include <stdlib.h>
#include <stdio.h>
 
 // a static variable inside a function keeps its value between invocations 
 void increment(void){
   static unsigned int counter = 0; 
   counter++; 
   printf("%d\n", counter); 

 }

 int main(void){
    for(int i = 0; i < 5;i++){
       increment(); // as you can see, incrment is called 5 times and since counter is static it retains its value amongst invokations and goes from 0 to 5 as the funciton is called 5 times 
    }
    return 0; 
 }