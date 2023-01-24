#include <stdio.h>
#include <stdlib.h>
int listeleme(int );

int a[9][3]={85,1,0,
               3,3,0,
              98,9,0,
             153,23,0,
               9,45,0,
              1,85,0,
             45,98,0,
              23,153,0,
  0,0,0};
void silme();
void ekleme();
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
    /*silme();
 
    for(int j=0;j<8;j++)
    {
        printf("\n%d\t%d\t%d",j+1,a[j][0],a[j][2]);
    }*/

    ekleme();
    for(int j=0;j<9;j++)
    {
        printf("\n%d\t%d\t%d",j+1,a[j][0],a[j][2]);
    }

 
}
 
listeleme(int sayi)
{
    int j=0;
    for(int k=0;k<8;k++)
   {
          if(a[k][0]==sayi)
          {
              return k;
       }
   }
}
 
void silme(){
    int n;
    int silinecekEleman;
    printf ("\n\nSilinecek elemani girin: "), scanf("%d",&silinecekEleman);
 
    for(n=0;n<8;n++){
        if(a[n][1]==silinecekEleman)
        break;
    }
 
    int silinecekElemaninAdresi = n+1;
    int silinecekElemaninBagAdresi = a[n][2];
    printf("\nSilinecek elemanin adresi %d silinecek elemanin bag adresi = %d",n+1,silinecekElemaninBagAdresi);
    for(n=0;n<8;n++){
        if(a[n][2]==silinecekElemaninAdresi)
        break;
    }
 
    printf("\nSilinecek elemanin adresini gosteren elemanin adresi %d, elemanin degeri %d",n+1,a[n][1]);
    a[n][2] = silinecekElemaninBagAdresi;
    a[silinecekElemaninAdresi][2] = -1;
    a[silinecekElemaninAdresi][1] = 0;
    printf("\n\n");
}
 
 
void ekleme()
{
int x=0,buyuk_eleman,buyukelemanadres,kucuk_eleman;
printf("\nEklenecek sayiyi giriniz:");
scanf("%d",&x);
a[8][0]=x;
for(int i=0;i<9;i++)
{
if(a[i][1]>x)
{
buyuk_eleman=a[i][1];
kucuk_eleman=a[i-1][1];
break;
}	
}
for(int j=0;j<9;j++)
{
if(buyuk_eleman==a[j][0])
{
buyukelemanadres=j+1;
a[8][2]=j+1;
}
}
for(int u=0;u<9;u++)
{
if(buyukelemanadres==a[u][2])
{
a[u][2]=9;
break;
}
}
 

}
 
 
 
 
 
 



