/*
 * Bismillahir Rahmanir Rahim .
 * Now I will make a sin plot .
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i = 0 , j = 0 ;
    float x[101] , y[101] ;
    char chara[101][101] ;

    for ( i = 0 ; i <= 100 ; i++ ) {

        for ( j = 0 ; j <= 100 ; j++ ) {

            chara[i][j] = '~' ;

        }

        x[i] = 0.1 * i ;
        y[i] = 50 + 50 * sin(x[i]) ;
        chara[i][(int)y[i]] = 127 ;

    }

    for ( i = 0 ; i <= 100 ; i++ ) {
        for ( j = 0 ; j <= 100 ; j++ ) {
            printf("%c",chara[i][j]);
        }

        printf("\n");
    }

    return EXIT_SUCCESS ;

}
