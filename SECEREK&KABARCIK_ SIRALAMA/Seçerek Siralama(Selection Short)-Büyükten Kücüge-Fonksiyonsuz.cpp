#include <stdio.h>

int main()
{
  int dizi[5],x,y,t;
  printf("Elemanlari giriniz");

  for (x=0;x<5;x++)
    scanf("%d",&dizi[x]);

  for (x=0;x<(5-1);x++)
  {
    for (y=0;y<5-x-1;y++)
    {
      if (dizi[y]<dizi[y+1])
      {
        t=dizi[y];
        dizi[y]=dizi[y+1];
        dizi[y+1]=t;
      }
    }
  }

  printf("Buyukten kucuge siralama: ");

  for (x=0;x<5;x++)
    printf("%d ", dizi[x]);

  return 0;
}
