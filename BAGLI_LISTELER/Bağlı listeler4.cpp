#include<stdio.h>
#include <stdlib.h>

int enKucuk();
void sayiEkle();
void sayiCikart();

const int boyut = 10;
int listeBasi = enKucuk();

int dizi[boyut][2] = {

			{ 5,0},
			{1,0},
			{25,0 },
			{13,0},
			{45 ,0 },
			{ 18,0},
			{ 22,0},
			{ 100,0},
			{ 8,0},
			{ 250,0},
			
	};

int sDizi[boyut][2] = {

			{ 1,0},
			{5,0},
			{8,0 },
			{13,0},
			{18 ,0 },
			{ 22,0},
			{ 25,0},
			{ 45,0},
			{ 100,0},
			{ 250,0},
			
	};	
	
	
void sayiEkle(int sayi)
{
	int i=0,j=0;
	int sonrakiIndis,oncekiSayi;
	bool bulundu = false;
	
	while(i < boyut)
	{
		if(dizi[i][0] == -1)
		{
			dizi[i][0] = sayi;
			bulundu = true;
			
			
				while(j < boyut)
				{
					if(sDizi[j][0] > sayi )
					{
						printf("degeri = %d\n",sDizi[j][0]);
						oncekiSayi = sDizi[j-1][0];
					
						break;
					}
					else
				
					j++;
				}
		
				j=0;
				
				while( j < boyut)
				{
					if(dizi[j][0] == oncekiSayi)
					{
						
						
						sonrakiIndis = dizi[j][1];
						dizi[j][1] = i;
						dizi[i][1] = sonrakiIndis;
						
					}
					j++;
					
				}
				
				
			//	printf("Onceki sayi %d %d | Sonraki Sayi %d %d",dizi[oncekiIndis][0],dizi[oncekiIndis][1],dizi[sonrakiIndis][0],dizi[sonrakiIndis][1]);
			//	dizi[oncekiIndis][1] = sonrakiIndis;
			
			break;
		}
		else
		
		i++;
	}
	
	
	if(!bulundu)
		printf("Girdiginiz sayi bulunamadi \n");
			
}	
	
	
void sayiCikart(int sayi)
{
	int i = 0 ,j=0;
	
	int oncekiIndis,sonrakiIndis;
	bool bulundu = false;
	
	
	
	
	while(i < boyut)
	{
		if(dizi[i][0] == sayi)
		{
			
			bulundu = true;
				while(j < boyut)
				{
					if(dizi[j][1] == i)
					{
						oncekiIndis = j;
						break;
					}
					j++;
				}
				
				j=0;
				
				sonrakiIndis = dizi[i][1];
				dizi[i][1] = -1;
				dizi[i][0] = -1;
				
				while(j < boyut)
				{
					 if(sDizi[j][0] == sayi)
					 {
					 	sDizi[j][0] = -1;
					 }
					 j++;
				}
				
				printf("Onceki sayi %d %d | Sonraki Sayi %d %d",dizi[oncekiIndis][0],dizi[oncekiIndis][1],dizi[sonrakiIndis][0],dizi[sonrakiIndis][1]);
				dizi[oncekiIndis][1] = sonrakiIndis;
			
			break;
		}
		
		
		i++;
	}
	
	if(!bulundu)
		printf("Girdiginiz sayi bulunamadi\n");
		
}


void sirala()
{
	int j = 1;
	
	int i = 0;
	
	int oncekiIndis = listeBasi;
	
	while(j <= boyut)
	{
	
		
		
			if(dizi[i][0] == sDizi[j][0]) 
			{
			//	printf("Onceki indisteki sayi = %d %d | Su anki sayi = %d %d\n",dizi[oncekiIndis][0],dizi[oncekiIndis][1],dizi[i][0],dizi[i][1]);
				dizi[oncekiIndis][1] = i;
				oncekiIndis = i;
				j++;
				i=0;
			}
			
			i++;
			
	}

}
	

int enKucuk()
{
	int kucuk = INT_MAX;
	int kucukIndis;
	
	
	for(int i = 0 ; i< boyut ; i++)
	{
		
		 	if(dizi[i][0] < kucuk)
		 	{
		 		kucuk = dizi[i][0];
		 		kucukIndis = i;
		 		
			}
		 	
		 
		 
	}
	
	return kucukIndis;
}


void diziYazdir()
{
	
	for(int i = 0 ; i<boyut ; i++)
	{
	
			printf("%d\t%d\t%d \n",i,dizi[i][0] , dizi[i][1]);
		 
	}
}


int main()
{	
	int sayi;
	
	printf("Siralaniyor\n\n");
	sirala();
		
	printf("Yazdiriliyor\n\n");
	diziYazdir();
	
		printf("Cikartmak istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	printf("Cikartiliyor 8\n\n");
	sayiCikart(sayi);
	
	printf("Yazdiriliyor\n\n");
	diziYazdir();
	
	printf("Cikartmak istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	
	printf("Cikartiliyor 8\n\n");
	sayiCikart(sayi);
	
	printf("Yazdiriliyor\n\n");
	diziYazdir();
	
	printf("Eklemek istediginiz sayiyi giriniz ");
	scanf("%d",&sayi);
	
	sayiEkle(sayi);
	
	
	printf("Yazdiriliyor\n\n");
	diziYazdir();
	
/*	printf("Sayi Ekle 15\n\n");
	sayiEkle(15);
	
	printf("Yazdiriliyor\n\n");
	diziYazdir();
	
	
	printf("Cikartiliyor 13\n\n");
	sayiCikart(13);
	
	printf("Yazdiriliyor\n\n");
	diziYazdir();
	
	printf("Sayi Ekle 10\n\n");
	sayiEkle(10);
	
	
	printf("Yazdiriliyor\n\n");
	diziYazdir();
	*/
	return  0;
}
