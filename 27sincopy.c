/*
 *
 *
 */

#include<stdio.h> 
#include<math.h> 
int main()  {
    
    char c[101][101];  
    
    float x[101],y[101];  
    
    int i,j;    
    
    for(i=0;i<=100;i++)for(j=0;j<=100;j++)c[i][j]= '#';
    
    for(i=0;i<=100;i++)x[i]=0.1*i;  
    
    for(i=0;i<=100;i++)y[i]=50+50.*sin(x[i]);
    
    for(i=0;i<=100;i++)c[i][(int)y[i]]=127;
    

    for(i=0;i<=100;i++)   {    

        {for(j=0;j<=100;j++)printf("%c",c[i][j]);}
        
        printf("\n");
    
    } 

}
