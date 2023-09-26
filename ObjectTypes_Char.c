#include <stdio.h>
#include <stdlib.h> 


int main()
{
//   Initializing an unsigned char: Here we try to insert a char in the unsigned char variable with the help of ASCII value. 
//   So the ASCII value 97 will be converted to a character value, i.e. ‘a’ and it will be inserted in unsigned char.

    int chr = 97;
    unsigned char i = chr;
    printf("unsigned char: %c\n", i);

// Initializing an unsigned char with signed value: Here we try to insert a char in the unsigned char variable with the help of ASCII value.
//  So the ASCII value -1 will be first converted to a range 0-255 by rounding. 
//  So it will be 255. Now, this value will be converted to a character value, i.e. ‘ÿ’ and it will be inserted in unsigned char.

    int chrn = -1;
    unsigned char j = chrn;
    printf("unsigned char: %c\n", j);
  






    return 0;
}