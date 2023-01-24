#include <stdio.h> 
#include<stdlib.h> 
main()
{

// aðaç oluþturma

   int j,i,x,y=1;
   int b [100];
	
    for (j=1 ; j <=100 ; j++ )  // dizinin sýfýrlanmasý
         b[j]=0;    
         
    b[1]=25;b[2]=13;b[3]=42;b[4]=9;b[5]=22;b[6]=30;b[8]=4;b[10]=15;b[12]=29;b[21]=16;b[43]=18;b[86]=17;         
 	 
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

