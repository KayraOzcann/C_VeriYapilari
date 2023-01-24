#include<stdio.h>
 
int main (){
	
	 int matris[4][4] = {	{0,10,0,0} , {0,0,0,3} , {8,0,0,0} , {0,0,6,0}  } ;
	 char matris1 [4][30]= {  {"PTT-Dirgeme Yolu"},
	 {"PTT-Carsi Subesi"},
	 {"PTT-Mugla Subesi"},
	 {"PTT-Cellali Sokak"}  };
	 
	int i,j;
	printf("\t\t\t");
	for(i=0;i<4;i++){
		for (j=0;j<20;j++){
			printf("%c",matris1[i][j]);
		}
		
		printf("\t");
	}
	printf("\n");
	for(i=0;i<4;i++){
    	
    ;
		for (j=0;j<20;j++){
			printf("%c",matris1[i][j]);
		}
		
	
    	
		for(j=0;j<4;j++){
			
			printf("\t\t\t%d ",matris[i][j]);
			
			
		}
		printf("\n");
		
	}
	
	
	printf(" \n\n\tDugum Baglantilari\n\n");
	
	int yolbaglantisayisi =0 ,yolbaglantimaliyet =0;
	printf("baslangic noktasi  olsun bitis noktasini girin \n");
	int k ,n;
	for(i=0;i<4;i++){
										
    	
		for(j=0;j<4;j++){
			
			if(matris[i][j]>0){

				
						for (k=0;k<20;k++){
						printf("%c",matris1[i][k]);
							}
						printf("\t =>\t");
						
											for (k=0;k<20;k++){
						printf("%c",matris1[j][k]);
							}
						printf("\t");
				
				printf(" maliyet/sure => %d \n",matris[i][j]);

				yolbaglantisayisi++;
				yolbaglantimaliyet += matris[i][j];
				
				
			}
			
			
			
		}
		printf("\n");
		
	}
	
	printf("\ntoplam yol sayisi = %d \ntoplam yol maliyeti = %d  \n", yolbaglantisayisi,yolbaglantimaliyet);
	
	
}
