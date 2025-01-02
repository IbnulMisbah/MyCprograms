                                     //Bismillahir Rahmanir Rahim    
                            //Now I am starting the book : "C For Everyone" . 
                            //It is first program by this book , So let's go .

#include <stdio.h>                          //Header file for standard input output
#include <stdlib.h>                         //To utilize the program by system() function .
#include <unistd.h>                         //It contains the sleep() function .
//#include <conio.h>                        //No such file or directory
//#include <dos.h>                          //No such file or directory

//void main()                               //main() function must return int value not void.
int main()
{
    system("clear");                        //It will clear the screen .Like clrscr() .

    printf("Bismillahir Rahmanir Rahim .\n");
    printf("I am starting the book 'C For Everyone' ......\n");
    
    sleep(5);                              //sleep() will delay 5 seconds .
    
    return 0 ;
}

//clrscr();                             //clrscr() was not declared in this scope .
//conio.h , dos.h , clrscr() these are used in Dos OS . Not supported in Linux.
