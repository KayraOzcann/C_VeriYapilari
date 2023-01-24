#include <stdio.h>
#include <stdlib.h>
/* birlestirmeli siralama - merge sort*/
int main (void)
{
int a[100],b[100],d[200];
int n,m,i,j,l;
printf("Ilk dizinin boyutunu girin < 100 \n");
scanf("%d",&n);
printf("Ikinci dizinin boyutunu girin <100 ?\n");
scanf("%d",&m);
printf("Ilk sirali diziyi girin:\n ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Ikinci sirali diziyi girin:\n ");
for(i=0;i<m;i++)
scanf("%d",&b[i]);
a[n]=b[m-1];
b[m]=a[n-1];
i=0;
j=0;
for(l=0;l<n+m;l++)
   if(a[i]<=b[j]){
      d[l]=a[i];
      i++;
      }
      else
      {
      d[l]=b[j];
      j++;
      }
printf(" New array \n\n" );
for(i=0;i<n+m;i++)
printf("%5d",d[i]);
return 0;
}

