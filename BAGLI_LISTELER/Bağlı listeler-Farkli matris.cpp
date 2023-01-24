#include <stdio.h>
#include <stdlib.h>
int listeleme(int );
int a[6][3]={10,3,0,
               58,10,0,
              27,15,0,
             3,27,0,
               15,32,0,
              32,58,0};
main()
{
    int liste_basi=1,liste_basi_adres=3;
    int veri_adresi;
    for(int i=0;i<5;i++)
    {
        int eleman=a[i+1][1];
        veri_adresi=listeleme(eleman);
        a[liste_basi_adres][2]=veri_adresi+1;
        liste_basi_adres=veri_adresi;
    }
 
    for(int j=0;j<6;j++)
    {
        printf("\n%d\t%d\t%d",liste_basi,a[j][0],a[j][2]);
        liste_basi++;       
    }
}
 
listeleme(int sayi)
{
    
    for(int k=0;k<6;k++)
   {
          if(a[k][0]==sayi)
          {
              return k;
       }
   }
}

