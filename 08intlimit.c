//Bismillahir Rahmanir Rahim .
//Now we will learn about the limitation of Integer data type .
//An Integer variable takes 2 byte in memory .It means it takes 16 bit in memory .
//The left bit store sign of number .If the bit is 0 its a positive number or the bit is 1 its negative number . 
//The right 15 bit store value of integer variable .It stores -2^15,....,0,....,+2^15-1 ,As 0 is included in bits .
//But if we take -2^15 , 2^15-1 or larger than these number ,There could an error .
//But this range can change by computer architecture . Now we will test it .
#include<stdio.h>                                   //Header file for standard input and output .
#include<stdlib.h>                                  //Header file for utilizing the program .
#include<unistd.h>                                  //Header file for the sleep() function .
#include<limits.h>                                  //Header file for seeing the limitation of data types .

int main ()
{
    system ("clear");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    
    printf("INT_MAX: %d\n", INT_MAX);                                   //Maximum int range .
    printf("INT_MIN: %d\n", INT_MIN);                                   //Minimum int range .
    printf("UINT_MAX: %u\n", UINT_MAX);                                 //Maximum Unsigned int range .
    
    sleep (3);
    
    return EXIT_SUCCESS ;
}
