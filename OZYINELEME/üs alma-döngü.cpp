
#include <stdio.h>
 

 
int main() {
 
    int sayi, us, i, sonuc = 1; //4*4=16 byte
 
    printf("Sayiyi Giriniz: "); 
    scanf("%d", &sayi);
 
    printf("Alinacak us degerini giriniz: ");
    scanf("%d", &us); //4
 
    for (i = 0; i < us; i++) //2n+2
        sonuc = sonuc * sayi; //n 
 
    printf("Sonuc= %d\n", sonuc); //1
 
    return 0;
}
