#include <stdio.h> 
#include<stdlib.h> 
main()
{

// a�a� olu�turma

   int e=1,j,i,k,x,y=1;
   int b [101],sayilar [10];
	
    for (j=1 ; j <=100 ; j++ )  // dizinin s�f�rlanmas�
         b[j]=0;    
         
    printf("\nSifrelenecek sayilari girin \n1.sayiyi girin ");
    scanf("%d",&x);
    b[1]=2*x;
    sayilar[e]=x;
 	 
     do
	{
	 e++;
     printf("\n%d. sayiyi girin, cikmak icin 0 girin: ",e);
     scanf("%d",&x);
     if ( x==0) break;
     sayilar[e]=x;
	 i=1;
	 j=1;
     while ( b[j]!=0 )
     {	//printf("\n x=%d b[%d]=%d",x,j,b[j]);  
          if ( (2*x)>b[j] ) 
              j=(2*i)+1;	// sa�a, �ifrelemenin bir �ar�as� olarak
          else
              j=2*i;	// sola
     //printf("\n j=%d",j);  
     i=j;
     }
     b[j]=2*x;  // yeni eleman�n eklenmesi, form�l 2* x
     
    // printf("\nx=%d eklendigi adres =%d",x,j);
     //for (j=1 ; j <100 ; j++ )
       //if (b[j] > 0) printf ("\nb[%d]=%d",j,b[j]);
        
 }
     while (y); 
     
	 printf("\n Girilen sayilar\n");
	 for(k=1; k<e; k++)
	    printf(" %4d",sayilar[k]);
	    
	 printf("\n Sifrelenmis sayilar %d adet\n ",j);
	 for(k=1; k<=j; k++)
	    printf("%4d",b[k]);
		
	 printf("\n Sifresi cozulmus sayilar\n ");
	 for(k=1; k<=j; k++)
	    if(b[k]>0) printf("%4d",b[k]/2);
				   
}

