#include <stdlib.h> 
#include <stdio.h> 

// A Structure type contains sequentially allocated memeory objects
// Structures are useful for declaring collections of related objects and may be used to represent things such as 
// date, cusotmer, and personel record 
//********Particularly USEFUL: Passing related data to functions instead of as individual arguments*******
// Each object has its own name and may have a distinct type unlike in an Array 
// Similar to record types found in other programming languages 
struct sigrecord{
    int signum; //Object of type int 
    char signame[20]; //20 element char array 
    char sigdesc[100]; // char array containing 100 elements 

} sigline, *sigline_p; 

//sigline of type struct and pointer to sigline 

//Accessing the memebers of a structure is useful. It is done by using the structure member operator (.)
//If you have members of a structure, you can reference its members with the structure pointer operator 
// (->)



// Union types are similar to structures except that the memory used by the memeber objects overlaps
// Unions can contain only one kind of object at a time whether that be structs or arrays or data members
// E.g. A Union containing three structures 

union {
    struct{
        int type; 
    }n; 

    struct {
        int type; 
        int intnode; 
    } ni; 

    struct {
        int type; 
        double doublenode; 
    }nf; 
} u; 

// A Union here allows us to use the same memory for doublenode and intnode structures


// the union might be used in a tree, graph, or other data structure that has some nodes that contain 
// integer values (ni), and other nodes that contain floating point values (nf)  

int main(){
    //Accessing a Structure: 
    sigline.signum = 5; 
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from Keybaord");

    sigline_p = &sigline; // We assign the address of sigline to the pointer sigline_p 

    sigline_p->signum = 5; 
    strcpy(sigline_p->signame, "SIGINT"); // We indirectly assign the members of sigline using the -> operator and the pointer sigline_p
    strcpy(sigline_p->sigdesc, "Interrupt from keyboard");

    //Accessing a Union: 
    u.nf.type = 1; // As with structures, you can access union members via the (.) operator 
    u.nf.doublenode = 3.14; 
    //Note that using pointer to union, you can use the -> operator 


return 0; 
}


// We have: 
// * value-at
// & address of 
// . member of 
// -> pointer member reference 
