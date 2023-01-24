#include<stdio.h>
#include<stdlib.h>

 void ucgen_alani(int *,int *,int *); 
 main()
 {   
 int alan,taban=6,yukseklik=4;     
 
 printf("taban=%d yukselik=%d\n",taban,yukseklik);   
 ucgen_alani (&alan,&taban,&yukseklik);     
 printf("Ucgenin alani =%d\n",alan);     
 
 system("pause"); 
 
 } 
 
 void ucgen_alani(int *alan,int *t,int *h)
 {     
 *alan=(*t * *h) / 2; 
 }
