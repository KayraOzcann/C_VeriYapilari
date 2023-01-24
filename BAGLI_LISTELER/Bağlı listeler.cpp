#include<stdio.h>
#include<stdlib.h>
#define boyut 8
int veriSutundaSayiAra(int aranan){
	
	int matris[boyut]={85,3,98,153,9,1,45,23};
	printf("\n");
	for(int i=0;i<boyut;i++){
		printf("%5d",matris[i]);
		if(aranan==matris[i]){
			
			return i;
		}
	}
}
int main (){
	int hedef[boyut]={1,3,9,23,45,85,98,153};
	int listeBasi=1;
	int listeBasAdres=6;
	int veriBag[boyut];
	//veriBag[0]=ListeBasAdres;
	int veriAdres;
	int arananDeger;
	
	for(int i=0;i<boyut-1;i++){
		int hedefDiziElemani=hedef[i+1];
		veriAdres=veriSutundaSayiAra(hedefDiziElemani);
		veriBag[i]=veriAdres+1;
		
	}
	
	printf("\nBag :\n");
	for(int i=0;i<boyut;i++){
		printf("%5d",veriBag[i]);

  }
}
