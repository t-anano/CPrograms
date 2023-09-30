#include <stdlib.h> 
#include <stdio.h>

int main(void){

    //CONST QUALIFIER 
    const int i = 1; // const qualified int is placed in read-only-memory by the compiler
    // i = 2;  err: i is const-qualified and a runtime error is sent out 
    

    // Cases where you can cast away a const object in C

    //*Compiler Trick: C does not allow you to cast away the const if the original is declared as a a const-qualified object 

    const int i = 1; // const qualified type int 

    int *ip = (int *)&i; //typecasting the address to a poiner but this is not allowed in C 
    *ip = 2; // undefined behaviour 

    // Taking a const qualified type, typecasting it to a pointer and attempting to update the pointer is incorrect
    // If the const qualified type is set to ROM by the compiler during compilation 
    // a memory fault may arise when attempting to update the pointer at runtime 


    //C allows you to modify an object that is pointed to by a const-qualified pointer by casting the const away 
    int i = 12; 
    const int j = 12;
    const int *ip = &i; //set a const pointer to adress of i 
    const int *jp = &j; // do the same for j 
    *(int *)ip = 42; // ok, we cast the const pointer away and modify the original object because i was not defined as const initially  
    *(int *)jp = 42; //undefined behaviour because j was defined as constant initially  
    


    // VOLATILE
    // Used to model memory mapped I/O 
    // value may change unexpectedly or the value is updated by some sort of external factor 
    // should not be used for synchronization between threads 
    // static constant volatile-qualified objects model memory-mapped input ports such as a real time clock 

    volatile int port; // compiler generates instructions to read value from port
    port = port; //write this value back to port 

    // without the volatile qualification the compiler would see this as a no-op and potentially elimante both the read/write 

    //RESTRICT
    // a restrict qualified pointer is used to support optimization. 
    // aliasing can inhibit optimizations because the compiler can't tell if portions of an object can change values 
    // when another unrelated object is modified for example 


    return 0; 
}

// copies n bytes from the storage referenced by q to the storage referenced by p 
    void f(unsigned int n, int * restrict p, int * restrict q){
            while(n-- > 0){
                *p++ = *q++; 
            }
    }
// both p and q are restrict qualified pointers, the compiler can assume that an object accessed by one of the pointer 
// parameters is not also accessed through the other 