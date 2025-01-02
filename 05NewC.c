//Bismillahir Rahmanir Rahim .
//Now i will make a unique program .

#include <stdio.h>                                      //Header file for standard input and output .
#include <stdlib.h>                                     //Header file for utilizing the program .
#include <unistd.h>                                     //Header file for usin sleep() function .

int main ()
{
    int i , j ;                                         //Variable for Loops .
    
    system ("clear");
    
    for ( i=10 ; i>=1 ; i-- ) {
        for ( j=1 ; j<=i ; j++ ) {
        printf ("#");
        }
    printf ("\n");
    }
    
    sleep (4);
    
    return EXIT_SUCCESS ;
} 
