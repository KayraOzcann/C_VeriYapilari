#include<stdio.h>
#include<locale.h>
void qsort(int dizi[],int min,int max); 
int d[100],n,i;
int main(void)
{
	setlocale(LC_ALL, "Turkish"); 
	
	printf("Dizi boyutunu giriniz (<100)\n"); 
	scanf("%d",&n);
	printf("Dizi elemanlarýný giriniz \n");	
		
	for (i=0;i<n;i++)
	{
		printf("dizi[%d]:",i);
		scanf("%d",&d[i]);
	}	
	
	qsort(d,0,n-1); // fonksiyonu çaðýrýrýz
	printf("\n Siralanmýþ dizi \n");
	
	for(i=0;i<n;i++)   
		printf("%4d",d[i]); //dizi sýralanýr
	return 0;
}

void qsort(int dizi[],int min, int max){
	int k=min,j=max,mid,temp;	//k=0, j=n, mid=0,temp=0 deðerinde
	
	mid=dizi[(min+max)/2]; //dizinin ortadaki deðerini buluruz
	printf ("\n\nmid:%d\n",mid); 
	
	do{
		while((dizi[k]<mid)&&(k<max))
			k++;	                      //Döngüler
		while((dizi[j]>mid)&&(j>min)) 
			j--;	
		printf("k(min):%d   j(max):%d",k,j); 
		if(k<=j)      
		{
			temp=dizi[k];
			printf("\ntemp:%d <= dizi[k]:%d",temp,dizi[k]); 
			dizi[k]=dizi[j];
			printf("\ndizi[k]:%d  <= dizi[j]:%d",dizi[k],dizi[j]); // seçilen ortaki deðeri tek tek karþýlaþtýrarak elemaný büyük olaný saða küçük olaný sola koyarýz;
			dizi[j]= temp;
			printf("\ndizi[j]:%d  <= temp:%d\n",dizi[j],temp); 
			k++;
			j--;
			for(int i=0;i<n;i++)   
				printf("%4d ",d[i]);
			printf("\n\n\n"); 
		}
		else 
			printf("\nmax deðer min deðerden küçük"); 
	}while(k<=j);

	if(min<j) 
		qsort(dizi,min,j);  
	if(k<max)                    // tekrarlý döngüleri sayesinde sýralamý oluþtururuz.
		qsort(dizi,k,max);  
}
