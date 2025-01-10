/*
 * Bismillahir Rahmanir Rahim ..
 * Now I will make a project by character & loop .
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int loop = 1 ;
    
    system("clear");

    for ( loop = 32 ; loop <= 255 ; loop++ ) {
        printf("%d for %c .\n",loop,loop);
    }
    
    sleep(3);

    return EXIT_SUCCESS ;

}
