//Bismillahir Rahmanir Rahim .
//Now I will learn a new library .

#include <stdio.h>                                          //Header file for standard input and output .
#include <stdlib.h>                                         //To utilize the program by system() function .
#include <unistd.h>                                         //It contains sleep() function .
#include <ctype.h>                                          //It is a Header file, used to know character's type .

int main ()                                                 //main() function .
{
    system ("clear");                                       //It will clear the screen .
    
    char letter = 'A';                                      //Declaration of character data type .

    printf ("Type a character : ");                         //Prompt to the user .
    scanf  ("%c",&letter);                                  //Receiving input .
    
    if ( isalpha(letter) ) {                                //isalpha() will check is it an alphabet .
    printf ("%c is an alphabet .\n", letter );
    }
    
    if ( isalnum(letter) ) {                                //isalnum() will check is it a alphanumeric letter . 
        printf ("%c is an alphanumeric letter .\n", letter );
    }
    
    if ( isdigit(letter) ) {                                //isdigit() will check is it a digit .
    printf ("%c is a digit .\n", letter );
    }
    
    if ( islower(letter) ) {                                //islower() will check is it in lower case .
    printf ("%c is a lower case letter .\n", letter );
    char upper = toupper(letter) ;                          //toupper() will make it upper case .
    printf ("Its upper case is %c .\n", upper);
    }
    
    if ( isupper(letter) ) {                                 //isupper() will check is it an upper case .
    printf ("%c is an upper case letter .\n", letter );
    char lower = tolower(letter);                            //tolower() will make it lower case .
    printf ("Its lower case is %c .\n",lower);
    }
    
    sleep(3);
    return EXIT_SUCCESS ;
}

