#include <stdlib.h>
#include <stdio.h>

int j; // file scope of j begins 

void f(int i){ // block scope of i begins 
    int j = i; // block scope of j begins; hides file scope - j
    i++;    // i refers to the function parameter
    for(int i = 0; i < 2; i++){ // block scope of loop-local i begins
        int j = 2;  // block scope of inner j begins; hides outer j 
        printf("%d\n",j); // insner j is in scope, prints 2

    } // block scope of inner i and j ends 
    printf("%d\n",j); // the outer j is in scope and prints 1

} // the block scope of ia and j ends 

void g(int j);  // j has function protoype scope; hides-file scope j 

int main(void){
    f(6); 

    return 0; 
}