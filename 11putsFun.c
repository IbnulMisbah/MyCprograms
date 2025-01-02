//Bismillahir Rahmanir Rahim .
//Now i will make program that will display a string variable .

#include <stdio.h>                                  //Header file for standard input and output .
#include <stdlib.h>                                 //Header file to utilize the program .
#include <unistd.h>                                 //Header file for sleep() function .

int main ()                                         //Main function .
{
    char String[] = "Assalamu Alaikum ...";         //A string variable declaration .
    
    system ("clear");                               //It will clear the screen .
    
    puts (String);                                  //It will display the String Variable .
    
    sleep(3);                                       //Wait for 3 seconds .
    
    return EXIT_SUCCESS;                            //Exit with success .
}
