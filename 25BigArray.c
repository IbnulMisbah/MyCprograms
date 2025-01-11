/*
 * Bismillahir Rahmanir Rahim ..
 * Now i will make a big Array ..
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int lo = 1 , op = 1 ;
    
    // 100 * 100 = Array .
    char Array[101][101] ;

    // Value Assigning ..

    for ( lo = 0 ; lo <= 100 ; lo++ ) {

        for ( op = 0 ; op <= 100 ; op++ ) {

            Array[lo][op] = 127 ;

        }

    }
    
    printf("The value of Array[23][87] = %c , %d \n",Array[23][87] , Array[23][87] );

    return EXIT_SUCCESS ;

}
