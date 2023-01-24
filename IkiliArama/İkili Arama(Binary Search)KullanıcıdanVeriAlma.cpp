#include <stdio.h>
main()                                   // binary search
{    
    int a[7], i, k=0, ilk=1, aranan, is, orta, dizi_boyutu;
    printf ("\ndizi boyutunu giriniz:");  scanf("%d",&dizi_boyutu);
    
    printf ("sirali diziyi giriniz:");
    for(i=0;i<dizi_boyutu;i++)    scanf("%d",&a[i]);
    is = dizi_boyutu ;
    printf ("lutfen aranan sayiyi giriniz:"); scanf("%d",&aranan);
    
    orta=(ilk+is)/2;
    printf ("\n ilk = %d, son = %d, orta = %d",ilk,is,orta);
    while(ilk<=is && aranan!=a[orta])
    {            k=k+1;
                 if(aranan>a[orta])
                                     ilk=orta+1;
                 else
                                     is=orta-1;
                 orta=(ilk+is)/2;
                 printf ("\n ilk = %d, son = %d, orta = %d",ilk,is,orta);
    }
    if(aranan==a[orta])
              printf ("\naradiginiz sayi %d .elemandadir.", orta+1);
    
    else      printf ("\naradiginiz sayi bulunamadi.");
    printf ("\niterasyon sayisi: %d",k+1);
   
}
        
