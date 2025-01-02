//Bismillahir Rahmanir Rahim .
//It is program that will show how many memory takes various variable .

#include <stdio.h>                                  //Header file for standard input and output .
#include <stdlib.h>                                 //Header file for utilizing the program .
#include <unistd.h>                                 //Header file for sleep() function .

int main () 
{
    system ("clear");                               //It will clear the screen .
    
    printf ("\n\t Character type variable takes %d bytes .\a",sizeof(char));
    printf ("\n\t Integer   type variable takes %d bytes .\a",sizeof(int));
    printf ("\n\t Floating  type variable takes %d bytes .\a",sizeof(float));
    printf ("\n\t Double    type variable takes %d bytes .\n",sizeof(double)); 
    
    sleep (3);
    
    return EXIT_SUCCESS ;
}
