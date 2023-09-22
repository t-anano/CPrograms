#include <stdio.h> 

void swap(int *pa, int *pb){ // * is the indirection operator, we use them to both declare pointers and dereference them 
    int t = *pa;  // * can be thought of as the indirection or value at operator 
    *pa = *pb; // this means that the value in the pa address is now assigned to the value in pb adress 
    *pb = t; 
  return;  

}

int main(void){
    int a = 21; 
    int b = 17; 
    swap(&a,&b); // ampersand is the address-of operator which generates a pointer to its operand 
    printf("a = %d, b = %d\n",a ,b); 
    return 0; 
}