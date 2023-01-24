#include <stdio.h> 
#include<stdlib.h>

main()
{

// mevcut bir aðaçtan eleman silme, sadece son düðümü siler ve yerine 0 yazar, kaydýrma yok

   int j,i,x,y=1;
   int b[101];

   
	// kodda 0'la karsilastirma var, bos gozler 0 ile ifade ediliyor
    for (j=1 ; j <=100 ; j++ )
         b[j]=0;  	
      
    b[1]=25;b[2]=13;b[3]=42;b[4]=9;b[5]=22;b[6]=30;b[8]=4;b[10]=15;b[12]=29;b[21]=16;b[43]=18;b[86]=17;
     
     
  	for (j=1 ; j <=100 ; j++ )
      if (b[j] > 0) printf ("\nb[%d]=%d",j,b[j]); //////////////////////0 yazdým
  
	 
     do
	{
     printf("\nagactan silinecek sayiyi girin, cikmak icin 0 girin");
     scanf("%d",&x);
     if ( x == 0) break;
     
	 i=1;
	 j=1;
     while (b[i]!=x)
     {	
	 
	 if(i>101) {
	 	printf("\n\nAradiginiz eleman bulunamadi \n\n");
	 	break;
	 }
	 
	 printf("\n x=%d b[%d]=%d",x,j,b[j]);  
      	  if ( x>b[j] ) 
              j=2*i+1;	// saða
          else
              j=2*i;	// sola
     printf("\t j=%d",j);  
     i=j;
     }
     // i= elemanýn bulunduðu yer
     //////////////////////////7
     int deger=0;
     deger=i;
     while(b[deger*2]!=0||b[deger*2+1]!=0){
     	
     	if(b[deger*2]!=0){
     		b[deger]=b[deger*2];
     		deger*=2;
		 }
		 else if(b[deger*2+1]!=0){
		 	b[deger]=b[deger*2+1];
		 	deger=deger*2+1;
		 }
     	
     	
	 }
	 b[deger]=0;
     
     
     /////////////////////////
     /*
     if(b[i]==x) {
	  printf("\nx=%d silindigi adres =%d",x,j);
  	
	  	b[i]=0;
		  } // eleman siliniyor
   
    // if(b[i]==x)  printf("\nx=%d silindigi adres =%d",x,j);
     */
     for (j=1 ; j <=100 ; j++ )
        if (b[j] > 0) printf ("\nb[%d]=%d",j,b[j]);
        
 }
     while (1); 
}
