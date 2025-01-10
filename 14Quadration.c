// Bismillahir Rahmanir Rahim ..
// Now i will make Quadratatic Equation Solver ..

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a , b , c , fstroot , sndroot;

    printf("Please , Write value of a : ");
    scanf ("%f",&a);

    printf("Please , Write value of b : ");
    scanf ("%f",&b);

    printf("Please , Write value of c : ");
    scanf ("%f",&c);

    fstroot=(-b+sqrt(b*b-4*a*c))/(2*a);
    sndroot=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("The 1st result is  %f .\n",fstroot);
    printf("The 2nd result is  %f .\n",sndroot);

    return EXIT_SUCCESS ;

}
