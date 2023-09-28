#include <stdlib.h> 
#include <stdio.h> 


//Derived types are constructed from other types - 
// These include pointers, arrays, type definitions, structures, and unions

// A pointer type is derived from the funciton or object it points to 
// A pointer provides a reference to an entitiy of the referneced type 
int *ip; 
char *cp; 
void *vp; 

int i = 17; 
int *ip = &i; 
//* indirection operator - converts a type into a value of that type 
// & adress of operator 
ip = &*ip; // ip is the adress of the value at ip which is the adress of i 


//An array is a contiguously allocated sequence of objects with the same element type

int ia[11]; // Array of 11 ints 
float *afp[17]; // 17 elements of type pointer to float

int main(){

    char str[11];
    for(unsigned int i = 0; i < 10;i++){
       str[i] = '0' + i; // Yields a number 
    }

    str[10] = '\n'; 




    return 0; 
}