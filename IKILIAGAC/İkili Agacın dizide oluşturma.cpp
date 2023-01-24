#include <stdio.h> 
#include <stdlib.h> 
main()
{

// aðaç oluþturma

   int j,i,x,y=1;
   int b [100];
	
    for (j=1 ; j <=100 ; j++ )  // dizinin sýfýrlanmasý
         b[j]=0;    
         
     printf("\nkok degerini girin: ");
     scanf("%d",&x); 
 	 b[1]=x;
 	 
     do
	{
     printf("\nagaca eklenecek sayiyi girin, cikmak icin 0 girin: ");
     scanf("%d",&x);
     if ( x==0) break;
     
	 i=1;
	 j=1;
     while ( b[j]!=0 )
     {	printf("\n x=%d b[%d]=%d",x,j,b[j]);  
          if ( x>b[j] ) 
              j=(2*i)+1;	// saða
          else
              j=2*i;	// sola
     printf("\n j=%d",j);  
     i=j;
     }
     b[j]=x;  // yeni elemanýn eklenmesi
     
     printf("\nx=%d eklendigi adres =%d",x,j);
     for (j=1 ; j <100 ; j++ )
        if (b[j] > 0) printf ("\nb[%d]=%d",j,b[j]);
        
 }
     while (y); 
}

