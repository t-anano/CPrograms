#include <stdlib.h> 
#include <stdio.h> 

int main(void){
    // Integers: 
    // Integer type represnts a finite range of integers
    // Signed integer tpyes: can be negative (-) positive (+) or 0
    // Unsigned types: can be 0 or positive (+) 
    // The range that each type represents depends on the implementation 
    // Value: the ordinary mathematical value stored in the object 
    // The representation: particular bit encoding of the objects allocated storage 


    // Padding and Precision: 
    // All integer types except char, signed char, and unsigned char contain unused bits, known as padding that allow implementations to accomodate hardware quirks 
    // Width: the number of bits used to represent a value of a given type excluding padding but including the sign, often denoted by N
    // Precision: the number of bits used to represent values excluding sign and padding bits 

    // The <limits.h> Header File 
    // Provides the minimum and maximum representable values for various integer types
    // A representable value is one that can be represented in the number of bits available
    // to an object of a partiicular type 
    // An object in C can be defined as data (a number of consecutive bytes) recognized by a 
    // name (simple type like int, double, ... or a struct) which has an address in memory.  


    // To write portable code us constant provided by the <limits> header instead of constants

    // Declaring integers: 
    // integral types are assumed signed excpet for char which coud be signe dor unsigned 


    unsigned int ui; // unsigned is required (0 or +)
    unsigned u;  // int can be ommitted
    unsigned long long ull2; //int can be omitted 
    unsigned char c;  // unsigned is required 
    
    // Declaring signed values: 
    // When declaring the signed integer type you can omit the signed keyowrd
    int i; // signed can be ommitted
    signed char u; // sign mut be included
    long long ull2; // signed and int can be ommitted 
    long long int ull3; // signed can be ommitted 

    //Unsigned Integers: have ranges that start at 0, upper bound is greater than that of the 
    // corresponding integer type 
    // frequently used to count items that have large nonnegative quantiities 



    return 0; 
}