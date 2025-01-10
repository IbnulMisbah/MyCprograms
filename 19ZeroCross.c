// Bismillahir Rahmanir Rahim .
// Now I will make a program that will solve a critical problem of quadratic equation .

#include <stdio.h>
#include <stdlib.h>

int main () {

    float a, b, c, minx, maxx, range, x[101] , y[101];
    int loop ;
    
    printf("Write the value of a : ");
    scanf("%f",&a);

    printf("Write the value of b : ");
    scanf("%f",&b);

    printf("Write the value of c : ");
    scanf("%f",&c);

    printf("Write the value of minx : ");
    scanf("%f",&minx);

    printf("Write the value of maxx : ");
    scanf("%f",&maxx);

    range = (maxx-minx)/100 ;

    for ( loop = 1 ; loop <=100 ; loop++ ) {

        x[loop] = minx + range * loop ;
        y[loop] = a*x[loop]*x[loop]+b*x[loop]+c ;

        printf("x = %.5f : y = %.5f \n",x[loop],y[loop]);
        
    }

    return EXIT_SUCCESS ;
}
