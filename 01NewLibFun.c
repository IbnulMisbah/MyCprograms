                                //Bismillahir Rahmanir Rahim .
                                
#include <stdio.h>                          //Header file for standard input and output .
#include <stdlib.h>                         //utilize the program .
#include <unistd.h>                         //For sleep() function .

int main ()
{
    system ("clear");                       //It will clear screen .
    
    printf ("Assalamu Alaikum .\n") ;
    printf ("Kaifal Haal ? \n") ;
    
    sleep (3);                              //It will sleep 3 seconds .
    getchar();                              //Instead of getch() function .
    
    return EXIT_SUCCESS ;
        
}

//textcolor (GREEN) ; It does not work in Linux . 
