//Bismillahir Rahmanir Rahim .
//Write a new program , that will receive many Character .

#include <stdio.h>                                          //Header file for Standard input and output .
#include <stdlib.h>                                         //Header file for utilizing any program .
#include <unistd.h>                                         //Header file for sleep() function .
#include <ctype.h>                                          //Header file for utilizing the Character data type .

#define Name 80

int main ()
{
    char letter , name[Name] ;                              //Declaration of Character data type .
    int i ;                                                 //Declaration i for loop .
    system ("clear");                                       //It will clear the screen .
    printf ("Please type your name :");                     //Prompt to the user .
    for ( i=0 ; (letter = getchar()) != '\n' ; ++i )        //Actually I dont understand this .
    {
    name[i] = letter ;
    }
    name[i] = '\0' ;
    
    printf ("\n %s %s %s Nice to meet you .\n", name );
    
    sleep (3);
    
    return EXIT_SUCCESS ;
}
