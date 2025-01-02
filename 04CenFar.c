//Bismillahir Rahmanir Rahim .
//Now we will write a program that will solve the centigrade and farenhite problem .

#include <stdio.h>                                      //Header file for standard input and output .
#include <stdlib.h>                                     //Header file for utilizing the program .
#include <unistd.h>                                     //Header file for sleep() function .

int main ()
{
    double cent , faren ;                               //Variable Declaration for formula .
    char letter ;                                       //This variable for taking action .
    
    system ("clear");                                   //Clear the screen .
    
    printf ("What you want to solve Centigrade or Farenhite (c/f) :");
    letter = getchar() ;
    
    if ( letter == 'c') {
    printf ("Please type Farenhite value :");
    scanf ("%lf",&faren );
    cent = (faren - 32)*5/9 ;
    printf ("Centigrade is %.5lf .\n",cent );
    }
    
    else if ( letter == 'f') {
    printf ("Please type Centigrade value :");
    scanf ("%lf", &cent );
    faren = (cent*9)/5  + 32 ;
    printf ("Farenhite is %.5lf .\n", faren );
    }
    
    else {
    printf ("Maybe you have given invalid input .\n");
    printf ("Please try again .\n");
    sleep (3);
    }
    
    return EXIT_SUCCESS ;
    
}
