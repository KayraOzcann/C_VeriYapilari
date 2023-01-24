#include<stdio.h>
#include<stdlib.h>

void alanHesapla(float *p,int *yaricap)  
{ *p = 3.14 * (*yaricap) * (*yaricap) ; } 
void cevreHesapla(float *p,int *yaricap)  
{ *p =  2 * 3.14 * (*yaricap); } 

int main() { 

float alan,cevre; 
int yaricap; 

printf("Yaricap giriniz = "); 
scanf("%d",&yaricap); 

alanHesapla(&alan,&yaricap); 
cevreHesapla(&cevre,&yaricap); 

printf("Alan = %f\n",alan); 
printf("Cevre = %f\n",cevre); 
return  0; }
