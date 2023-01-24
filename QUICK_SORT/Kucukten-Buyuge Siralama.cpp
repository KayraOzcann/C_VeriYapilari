#include<stdio.h>
#include<locale.h> 
void qsort(int d[],int,int); 

int main(void)
{
setlocale(LC_ALL, "Turkish"); 
int d[100],n,i;
printf("Dizi boyutunu giriniz (<100)\n"); scanf("%d",&n);
printf("Dizi elemanlarýný giriniz \n");		
for (i=0;i<n;i++)	 scanf("%d",&d[i]);
qsort(d,0,n-1);
printf("\n Siralanmýþ dizi \n");
for(i=0;i<n;i++)   
 printf("%4d",d[i]);
return 0;
}

void qsort(int dizi[],int min, int max){
int k=min,j=max,mid,temp;
mid=dizi[(min+max)/2];
do{
  while((dizi[k]<mid)&&(k<max))k++;
  while((dizi[j]>mid)&&(j>min)) j--;
  if(k<=j)        {
	 temp=dizi[k];
	 dizi[k]=dizi[j];
	 dizi[j]= temp;
	 k++;
         j--;
       }
}while(k<=j);
if(min < j) qsort(dizi,min,j);  
if(k < max) qsort(dizi,k,max);  
}   

