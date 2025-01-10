// Bismillahir Rahmanir Rahim ..
// Now I will make project by Array and Loop ..

#include <stdio.h>
#include <stdlib.h>

int main() {

    int loop = 0 , array[100] ;

    for ( loop = 0 ; loop <= 99 ; loop++ ) {

        array[loop] = loop ;

        printf("Array no %0.2d = %0.2d .",loop,array[loop]);

        printf("\n");

    }

    return EXIT_SUCCESS ;

}
