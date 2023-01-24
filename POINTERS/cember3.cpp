#include<stdio.h>
#include<stdlib.h>
void cember(float *,float *,float * );
main(){
float cevre,r,alan;
printf("r degeri giriniz");

scanf("%f",&r);
cember(&cevre,&r,&alan);
printf("cemberin cevresi=%f",cevre);
printf("\ncemberin alani=%f",alan);
system("pause");	
	
}

void cember(float *cevre,float *r,float *alan){


*cevre= 2 * 3.14 * *r;
*alan= 3.14 * *r * *r;	
	
}
