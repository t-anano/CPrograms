#include <stdio.h> 

void swap(int a, int b){ //a nd b become new and distinct objects because C is pass-by-value 
    int t = a; 
    a = b; 
    b = t; 
    printf("swap: a = %d, b = %d\n", a, b); 

}

int main(void){
    int a = 21; 
    int b = 17; 
    swap(a,b); //C is pass-by-value 
    printf("main: a = %d, b = %d\n",a ,b); 
    return 0; 
}