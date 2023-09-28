#include <stdlib.h> 
#include <stdio.h> 

// Function type declarators 
int f(void); 
int* fip(); 
void g(int i, int j); //its food to decalre fuunctions with identifiers but can be an issue if they hide macros 
void h(int, int); 

int Max(int a, int b){
    return a > b ? a : b; 
}


int main(){

    return 0; 
}