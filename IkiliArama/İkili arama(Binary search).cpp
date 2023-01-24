#include <stdio.h>




   int main(){
int aranansayi;
int solindis=0;
int sagindis=9; /* N-1 indis sayýsý verdiði için 9 yazýlacak */
int ortaindis;
int bulundu=0;
int dizi[10]={1,2,3,4,5,6,7,8,9,11};
int i=0;
printf("bir sayi giriniz: ");
scanf("%d",&aranansayi);
while(solindis <= sagindis){	/* tam ortayý vermesi için */
ortaindis = (solindis + sagindis)/2;
   if(aranansayi == dizi[ortaindis])
  {
        bulundu=1;
		break;    	
  
  }   	
	else if(aranansayi < dizi[ortaindis]){
		sagindis-=1;
		
	}
	else if(aranansayi > dizi[ortaindis]){
		
		solindis+=1;
	}
}
    if(bulundu){
    	printf("Sayi bulundu sayinin indisi:%d",ortaindis);
	}
     else
     printf("sayi bulunmadi");
     

}
