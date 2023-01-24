#include<stdio.h>
#include<stdlib.h> 	
#include<conio.h>  /* dizide ikili arama FONKSIYON ile */
#define dizi_boyutu 10
int ikili_arama (int array[], int aranan, int basl, int bitis);

main()
{  int aranan_sayi, i, dizi [dizi_boyutu] = {2,4,6,8,10,12,14,16,18,20} ;
	int eb=dizi_boyutu;//bitis
	int ek=1;//basl
	
   printf ("Aranan sayiyi giriniz :"); scanf("%d",&aranan_sayi);

   printf ("\nAranacak dizi:\n");
   for (i=0;i< dizi_boyutu;i++) printf("  %d", dizi [i]);
   printf("\n  ");
   for (i=0;i< (dizi_boyutu-1)*4;i++) printf("-");
   printf("\n");
   ikili_arama(dizi,aranan_sayi,ek,eb);

   /*if ( ikili_arama (dizi,aranan_sayi,0,dizi_boyutu-1) == 1)  
		printf("\ bulundu");
   else  	printf("\nAranan sayi bulanamadi");*/
}
int ikili_arama (int array[], int aranan, int basl, int bitis)
{  	
	int orta=(bitis+basl)/2;
	int k=0;
	  printf ("\n ilk = %d, son = %d, orta = %d",basl,bitis,orta);
 	while(basl<=bitis && aranan!=array[orta])
    {    
    
	        k=k+1;
                 if(aranan>array[orta])
                     basl=orta+1;
                 else
                     bitis=orta-1;
                 orta=(basl+bitis)/2;
        printf ("\n ilk = %d, son = %d, orta = %d",basl,bitis,orta);
      
    }
   if(aranan==array[orta]){
              printf ("\naradiginiz sayi %d .elemandadir.", orta+1);
			  }
    
    else      printf ("\naradiginiz sayi bulunamadi.");
    printf ("\niterasyon sayisi: %d",k+1);
    
    
    
     // return orta;

}



