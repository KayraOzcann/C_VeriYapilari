#include <stdio.h>
#include <stdlib.h>
int main (){
	
	 int matris[5][5] = {	{0,2,4,0,0} , {0,0,3,5,0} , 
	                        {0,0,0,0,1} , {0,0,0,0,6} , {0,0,0,0,0} } ;
	 char matrisharf [5]= {'A','B','C','D','E'};
	 
	int i,j;
	printf("\t");
	for(i=0;i<5;i++){
	printf("\t%c ",matrisharf[i]);
	
	}
	printf("\n");
	for(i=0;i<5;i++){
    	printf("\t%c ",matrisharf[i]);
		for(j=0;j<5;j++){
			
			printf("\t%d ",matris[i][j]);
			
			
		}
		printf("\n");
		
	}
	printf(" \n\n\t\tDugum Baglanrilari\n\n");
    int yolbaglantisayisi =0 ,yolbaglantimaliyet =0;
    for(i=0;i<5;i++){

    for(j=0;j<5;j++){
    if(matris[i][j]!=0){
    printf("%c => %c maliyet/sure => %d \n",matrisharf[i],matrisharf[j],matris[i][j]);
    yolbaglantisayisi++;
    yolbaglantimaliyet += matris[i][j];
    }
   }   
    printf("\n");
  } 
    printf("\ntoplam yol sayisi = %d \ntoplam yol maliyeti = %d \n",
     yolbaglantisayisi,yolbaglantimaliyet);
 }


