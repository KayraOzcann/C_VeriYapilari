#include <stdio.h> 
#include <stdlib.h> 
   int j,i,x,y;
   int b [100];
void cikarma()
{
     printf("\nagaca silenecek sayiyi girin");
     scanf("%d",&x);
     
     
	 i=1;
	 j=1;
     while ( b[j]!=x )
     {	printf("\n x=%d b[%d]=%d",x,j,b[j]);  
          if ( x>b[j] ) 
              j=(2*i)+1;	// saða
          else
              j=2*i;	// sola
     printf("\n j=%d",j);  
     i=j;
     }
     b[j]=0; //eleman siliniyor   
     
     printf("\nx=%d silindigi adres =%d",x,j);
     for (j=1 ; j <100 ; j++ )
        if (b[j] > 0) printf ("\nb[%d]=%d",j,b[j]);
}

void ekleme()
{

     printf("\nagaca eklenecek sayiyi girin");
     scanf("%d",&x);
  
     
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


main()
{

// aðaç oluþturma
y=1;
	int secenek;
    for (j=1 ; j <=100 ; j++ )  // dizinin sýfýrlanmasý
         b[j]=0;    
         
     printf("\nkok degerini girin: ");
     scanf("%d",&x); 
 	 b[1]=x;
 	 
     do
	{
     printf("\n agaca sayi eklemek icin 1 sayicikarmak icin 0, cikmak icin 0'dan kucuk sayi girin: ");
     scanf("%d",&secenek );
     if(secenek==1)
     {
     	ekleme();
	 }
     else if(secenek ==0)
     {
     	cikarma();
	 }
     
     
     
     /*
     
     if ( x<0) break;
     
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
        */
 } while (y); 
}
