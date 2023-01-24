#include <stdio.h>
#include <stdlib.h>
/* birlestirmeli siralama - merge sort*/
int main (void)
{
int a[6]={20,21,22,23,24,25};
int b[10]={1,2,3,4,5,6,7,8,9,10};
int d[16];
int i=5,j=9,l;
for(l=0;l<16;l++)
   if(a[i]>=b[j]){
      d[l]=a[i];
      i--;
      }
      else
      {
      d[l]=b[j];
      j--;
      }
printf(" New array \n\n" );
for(i=0;i<16;i++)
printf("%5d",d[i]);
return 0;
}

