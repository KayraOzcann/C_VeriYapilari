#include<stdio.h>
int ikili_arama(int array[], int dizi_boyutu, int aranan);
int main() {
   int array[] = {0,2,6,11,12,18,34,45,55,99};
   int n; 
   printf("Aramak istediginiz sayiyi giriniz: ");
   scanf("%d",&n);
   printf("%d sayinin indisi %d \n",n,ikili_arama(array,10,n));
   return 0;
}
int ikili_arama(int array[], int dizi_boyutu, int aranan) {
   int basl = 0;
   int bitis = dizi_boyutu-1;
   while(basl<=bitis) {
      int ort = (basl+bitis)/2;
      if( array[ort] == aranan) {
         return ort;
      } else if( aranan < array[ort] ) {
         bitis = ort-1;
      } else {
         basl = ort+1;
      }
   }
   printf("aranan sayi bulunamadi\n");
   return -1;
   
   
   
}
