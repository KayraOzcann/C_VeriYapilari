#include <stdio.h>
#include <stdlib.h>
main ()

{   int d[5], i, k, j, ekle;
    
    printf ( "Siralanacak diziyi girin:\n" ); 
    for (i=0; i<5; i++) scanf ("%d",&d[i]) ;

    for (i=1; i<5; i++) 
    {   
        ekle = d[i];
        printf ("\n\ni=%d elde= %d d[%d]=%d",i,ekle,i-1,d[i-1]);

        for (k=i-1; k>=0 && ekle<=d[k]; k--)  
        {   printf ("\nk= %d d[k+1] = %d d[k]=%d",k,d[k+1],d[k]);
            d[k+1] = d[k] ;
            	printf ( "\n%d. adim kaydirma",i ); 
    			for (j=0; j<5; ++j)  printf ( " %d",d[j] );
        }
 		printf ("\n d[%d]'e %d atanýyor",k+1,ekle);
        d[k+1] = ekle ;
        
		printf ( "\n%d. adim Siralanan dizi\n",i ); 
    	for (j=0; j<5; ++j)  printf ( " %d",d[j] );
    }   
       
    printf ( "\nSiralanan dizi\n" ); 
    for (i=0; i<5; ++i)    
	printf ( " %d",d[i] );
    
    printf ( " program bitti\n") ;
    system ("pause");
}


