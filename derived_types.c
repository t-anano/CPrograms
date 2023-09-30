#include <stdlib.h> 
#include <stdio.h> 

typedef unsigned int uint_type; 
typedef signed char schar_type, schar_type, *schar_p, (*fp)(void); // You can alias types in C with typedef 

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


void func(int arr[5]); 
int main(){

    char str[11];
    for(unsigned int i = 0; i < 10;i++){
       str[i] = '0' + i; // definition is such str[i] == *(str + i) = '0' + i 
       // Using brackets with arrays is like derefrenceing an offset from the start of the array


       //A Multidimesnional Array is called a Matrix 
       unsigned int i = 0; 
       unsigned int j = 0; 

       int arr[3][5]; //Arr is a list of three elements each of which is an array of 5 elements 
       func(arr[i]); // 1. arr is converted into a pointer to the initial array of 5 elements 2. i is scaled to represent 5 3. Steps 1 and 2 are added 4.  indirection is applied to the result 
       int x = arr[i][j]; // arr is converted into a pointer to the first element of type int 



       return 0;
    }

    str[10] = '\n'; 




    return 0; 
}