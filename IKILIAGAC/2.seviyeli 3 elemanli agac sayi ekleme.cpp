#include <stdio.h> 
#include<stdlib.h> 
main()
{

// aðaç oluþturma

   int j,i,x,y=1;
   int b [5];
	
    for (j=1 ; j <5 ; j++ )  // dizinin sýfýrlanmasý
         b[j]=0;    
         
    b[1]=x;b[2]=x;b[4]=x;
     do
	{
     printf("\nagaca eklenecek sayiyi girin, cikmak icin 0 girin: ");
     scanf("%d",&x);
     if ( x==0 && x>b[j]) break;
     
	 i=1;
	 j=1;
     while ( b[j]!=0 && x<b[j] )
     {	printf("\n x=%d b[%d]=%d",x,j,b[j]);  
     
              j=2*i;	// sola
          
            
	 printf("\n j=%d",j);  
     i=j;
     }
     if(j<5)
     b[j]=x;  // yeni elemanýn eklenmesi
     
    
     for (j=1 ; j <5 ; j++ )
        if (b[j] > 0) printf ("\nb[%d]=%d",j,b[j]);
        
 }
     while (y); 
}

