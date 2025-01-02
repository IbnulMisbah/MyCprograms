//Bismillahir Rahmanir Rahim .
//Its a program that will read string variable .

#include <stdio.h>                                  //Header file for standard input and output .
#include <stdlib.h>                                 //Header file for utilizing the program .
#include <unistd.h>                                 //Header file for sleep() function .

int main ()                                         //Main function .
{
    char String[100] ;                              //Declaration of a character variable .
    
    system ("clear");                               //Clear the screen .
    
    printf ("Please type your name :");             //Prompt to the user .
    fgets(String , sizeof(String), stdin);          //Reading input from user. This is modern function .
    //gets(String);                                 //Reading input. but gets() is unsafe and deprecated .
    printf ("Assalamu Alaikum ! ");
    puts (String);                                  //Display the string variable .
    
    sleep( 3 );                                     //Wait for 3 seconds .
    
    return EXIT_SUCCESS ;                           //Exit with success .
        
}
