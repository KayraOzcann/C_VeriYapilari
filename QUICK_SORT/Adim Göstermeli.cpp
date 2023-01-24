#include<stdio.h>
#include<locale.h>
void qsort(int dizi[],int min,int max); 
int d[100],n,i;
int main(void)
{
	setlocale(LC_ALL, "Turkish"); 
	
	printf("Dizi boyutunu giriniz (<100)\n"); 
	scanf("%d",&n);
	printf("Dizi elemanlar�n� giriniz \n");	
		
	for (i=0;i<n;i++)
	{
		printf("dizi[%d]:",i);
		scanf("%d",&d[i]);
	}	
	
	qsort(d,0,n-1); // fonksiyonu �a��r�r�z
	printf("\n Siralanm�� dizi \n");
	
	for(i=0;i<n;i++)   
		printf("%4d",d[i]); //dizi s�ralan�r
	return 0;
}

void qsort(int dizi[],int min, int max){
	int k=min,j=max,mid,temp;	//k=0, j=n, mid=0,temp=0 de�erinde
	
	mid=dizi[(min+max)/2]; //dizinin ortadaki de�erini buluruz
	printf ("\n\nmid:%d\n",mid); 
	
	do{
		while((dizi[k]<mid)&&(k<max))
			k++;	                      //D�ng�ler
		while((dizi[j]>mid)&&(j>min)) 
			j--;	
		printf("k(min):%d   j(max):%d",k,j); 
		if(k<=j)      
		{
			temp=dizi[k];
			printf("\ntemp:%d <= dizi[k]:%d",temp,dizi[k]); 
			dizi[k]=dizi[j];
			printf("\ndizi[k]:%d  <= dizi[j]:%d",dizi[k],dizi[j]); // se�ilen ortaki de�eri tek tek kar��la�t�rarak eleman� b�y�k olan� sa�a k���k olan� sola koyar�z;
			dizi[j]= temp;
			printf("\ndizi[j]:%d  <= temp:%d\n",dizi[j],temp); 
			k++;
			j--;
			for(int i=0;i<n;i++)   
				printf("%4d ",d[i]);
			printf("\n\n\n"); 
		}
		else 
			printf("\nmax de�er min de�erden k���k"); 
	}while(k<=j);

	if(min<j) 
		qsort(dizi,min,j);  
	if(k<max)                    // tekrarl� d�ng�leri sayesinde s�ralam� olu�tururuz.
		qsort(dizi,k,max);  
}
