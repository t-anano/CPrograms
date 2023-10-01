#include <stdlib.h>
#include <stdio.h>
 
  static unsigned int counter = 0;
 //static objects inside a function keeps its value between invocations   
 void increment(void){
   counter++; 
   printf("%d\n", counter);
 }
//Exercise 1: Write a fucntion to return the current count of counter 
 int retrieve(){
   return counter; 
 }


 // static objects must be initialized to a constant and not a variable 
 int* func(int i ){
    const int j = i; 
    static int k = 0; // expression must have a constant value because object is static 

 }


// Exercise 2: Write an array of 3 function pointers that execute based on the passed index 
int sum(int a, int b){return a + b;}
int subtract(int a, int b){return a - b;}
int mul(int a, int b){return a*b;}
int (*p[3])(int x, int y); // this is a pointer array to three functions in C 

 int main(void){
    for(int i = 0; i < 5;i++){ 
       printf("%d\n", retrieve());
       increment(); // as you can see, incrment is called 5 times and since counter is static it retains its value amongst invokations and goes from 0 to 5 as the funciton is called 5 times 
       
    }

   p[0] = sum; // set each index of the function pointer array to each function 
   p[1] = subtract; 
   p[2] = mul; 

   int op; 
   int a = 20; 
   int b = 5; 
   int result; 

   for (op = 0; op < 3; op++) {
         result = p[op](a, b);
         printf("Result: %d\n", result);
      }
      
    return 0; 
 }