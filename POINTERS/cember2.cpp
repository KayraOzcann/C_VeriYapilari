#include<stdio.h>
#include<stdlib.h>

void circle (float,float *,float *); 
main(){        
float radious,area,circumference;        
printf("Enter the radious");        
scanf("%f", &radious);        
circle(radious, &area, &circumference);        
printf("Area= %f circumference= %f\n",area,circumference);        
system("pause");        }        
void circle(float r,float *ar,float *c){         
                             
   *ar= 3.14*r*r;                   
   *c= 2*3.14*r;                   
}
