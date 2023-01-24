#include <stdio.h> 
#include<stdlib.h> 
main()
{


   int j,i,x,y=1;
   int b [100];
	
    for (j=1 ; j <=100 ; j++ )  
         b[j]=0;    
         
    b[1]=25;b[2]=13;b[3]=42;b[4]=9;b[5]=22;b[6]=30;b[8]=4;b[10]=15;b[12]=29;b[21]=16;b[43]=18;b[86]=17;    
	
	 for(j=1;j<=100;j++)
	 if(b[j]>0) printf("\n b[%d]=%d",j,b[j]);    
 	 
     do
	{
     printf("\nagaca silenecek sayiyi girin, cikmak icin 0 girin: ");
     scanf("%d",&x);
     if ( x==0) break;
     
	 i=1;
	 j=1;
     while ( b[j]!=x )
     {	printf("\n x=%d b[%d]=%d",x,j,b[j]);  
          if ( x>b[j] ) 
              j=(2*i)+1;
          else 
              j=2*i;
			
     printf("\n j=%d",j);  
     i=j;
     }
     b[j]=0; 
     
     printf("\nx=%d silindigi adres =%d",x,j);
     for (j=1 ; j <100 ; j++ )
        if (b[j] > 0) printf ("\nb[%d]=%d",j,b[j]);
     if(i>101) printf("eleman bulunamadý");   
 }
 
     while (y); 
}

