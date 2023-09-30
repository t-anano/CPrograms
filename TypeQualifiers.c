#include <stdlib.h> 
#include <stdio.h>

int main(void){
    const int i = 1; // const qualified int is placed in read-only-memory by the compiler
    // i = 2;  err: i is const-qualified and a runtime error is sent out 
    
    //*Compiler Trick: 
    const int i = 1; // const qualified type int 
    int *ip = (int *)&i; //typecasting the address to a pointer but this is not allowed in C 
    *ip = 2; // undefined behaviour 

    // Taking a const qualified type, typecasting it to a pointer and attempting to update the pointer is incorrect
    // If the const qualified type is set to ROM by the compiler during compilation 
    // a memory fault may arise when attempting to update the pointer at runtime 


    return 0; 
}