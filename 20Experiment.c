/*
 * Bismillahir Rahmanir Rahim ..
 * Now I will make a project ..
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    float a,b,c,minx,maxx,range,x[101],y[101] ;
    int loop = 0 ;
    int i = 0 ;

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
    
    for ( i = 1 ; i <= 50 ; i++ ) {
        printf("x = %0.5f y = %0.5f x = %0.5f y = %0.5f \n",x[i],y[i],x[50+i],y[50+i]);

    }

    return EXIT_SUCCESS ;

}
