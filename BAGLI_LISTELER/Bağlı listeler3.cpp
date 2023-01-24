#include <stdio.h>
#include <stdlib.h>
int listeleme(int );
int a[8][3]={85,1,0,
               3,3,0,
              98,9,0,
             153,23,0,
               9,45,0,
              1,85,0,
             45,98,0,
              23,153,0};
main()
{
    int liste_basi=1,liste_basi_adres=5;
    int veri_adresi;
    for(int i=0;i<7;i++)
    {
        int eleman=a[i+1][1];
        veri_adresi=listeleme(eleman);
        a[liste_basi_adres][2]=veri_adresi+1;
        liste_basi_adres=veri_adresi;
    }
 
    for(int j=0;j<8;j++)
    {
        printf("\n%d\t%d\t%d",j+1,a[j][0],a[j][2]);
    }
}
 
listeleme(int sayi)
{
   
    for(int k=0;k<8;k++)
   {
          if(a[k][0]==sayi)
          {
              return k;
       }
   }
}

