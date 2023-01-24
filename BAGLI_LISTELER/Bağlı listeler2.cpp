#include <stdio.h>
# define boyut  8
								//  bellek adresi //      veri 			//   	mevcut bað 				
	int matris [boyut][boyut] = { {0,1,2,3,4,5,6,7},{85,3,98,153,9,1,45,23} ,{7,1,5,2,6,4,0,3}  };
	int Badres=0 , veri =1 , mevcutbag =2;  
	// matris [3][8] liktir
	//  Hedef sýralama: 1	3	9	23	45	85	98	153
	// hedef     bað    0    1   2   3   4   5   6    7
	
	int SayiAra( int sayi )
	{
		int i ,adres ;
		for (i=0;i<boyut;i++)
		{
			if (matris[veri][i]== sayi )
			adres =i;
		}
		
		return adres;
	}
	
	
	void MatrisiYazdir ()
	{
		int j;
		for ( j=0;j<boyut;j++)
		{
			printf ("\t  %d \t\t %d \t\t %d\n",matris[Badres][j] ,matris[veri][j],matris[mevcutbag][j]);
	    }
		
	}
	
int main ()
{
	int i=0, j,dizi [boyut] = {1, 3 ,9 , 23 , 45 ,85 ,98 ,153};
	int eleman,bellekadresi,bagadresi=5;/// baþlangýçta bað adresi 1 inkine eþit
	
	
	printf (" dizideki sirasi \t veri \t \t mevcut bag \n");
	MatrisiYazdir ();

	    printf(" \n   sayilar kucukten buyuge siralaniyor ");
	// listebaþý 1 olmalý 
	
		for (i=0;i<boyut;i++)
	{
		if (i ==boyut-1)
		{
			matris[mevcutbag][3]= 5;
		}
		eleman = dizi[i];
		matris[mevcutbag][SayiAra(i+1)]=SayiAra(eleman);
	
		
	}
		    printf(" \n   **************************************  \n");
	MatrisiYazdir ();
	    
	    printf(" \n  matris baga gore kucukten buyuge yazdiriliyor  \n");
	    
	    
	    i=0;
	    
	    while (i<boyut)
	    {
		
		 printf(" %d \t sayinin baglandigi sayi =%d \t  ",matris[veri][bagadresi],matris[mevcutbag][bagadresi]);
		 printf("sayinin bellekadresi =%d \n",matris[Badres][bagadresi]);
	    	bagadresi = matris[mevcutbag][bagadresi];
	    	
	    	i++;
		}
	    
	    
	
}

