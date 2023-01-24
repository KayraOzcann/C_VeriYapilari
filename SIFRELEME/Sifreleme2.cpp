#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include<locale.h>
int main (){
		setlocale(LC_ALL, "Turkish"); 
	
	char kelime[10], sifre[10], cozum[10];
	int i, a,b, ta, y, ara_deger, say=0;
	int mesafe=0,j,k,l;

	printf("\nkelime= ");
	gets(kelime);
	
	for (i=0; i<strlen(kelime);i++){ 
		kelime[i]=toupper(kelime[i]);
	}

	printf("\n kelime = \t");
	for (i=0; i<strlen(kelime);i++){ 
		printf ("\t %c",kelime[i]);
	}

	printf("\n asci kodu = \t");
	for (i=0; i<strlen(kelime);i++){ 
	
		printf ("\t %d",kelime[i]);
	}
	

	for (i=0; i<strlen(kelime);i++){ 
		for(j=65;j<90;j++){
			if(kelime[i]==j){
				k=j-65,l=90;
				sifre[i]=l-k;
				break;
			}
		}
	
	}

	printf("\n sifreleme = \t");
	for (i=0; i<strlen(sifre);i++){
		printf("\t %c",sifre[i]);
		
	}

		printf("\n\n\n\n sifre =\t");
	for (i=0; i<strlen(sifre);i++){ 
		printf ("\t %c",sifre[i]);
	}

	printf("\n asci kodu = \t");
	for (i=0; i<strlen(sifre);i++){ 
	
		printf ("\t %d",sifre[i]);
	}

	for (i=0; i<strlen(sifre);i++){ 
		for(j=90;j>65;j--){
			if(sifre[i]==j){
				k=90-j,l=65;
				cozum[i]=k+l;
				break;
			}
		}
	
	}

		printf("\n cozum = \t");
	for (i=0; i<strlen(cozum);i++){
		printf("\t %c",cozum[i]);
		
     }
}
	
