// Bismillagir Rahmanir Rahim .
// Now I will make a program to convert number to Ascii .

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int loop = 0 ;

    int from = 0 , to = 0 ;

    printf("Please type starting point : ");
    scanf("%d",&from);

    printf("Please type your ending point : ");
    scanf("%d",&to);

    for ( loop = from ; loop <= to ; loop++ ) {

        printf("   %d is equal to %c  \n", loop , loop );

    }

    sleep(3);

    return EXIT_SUCCESS ;

}
