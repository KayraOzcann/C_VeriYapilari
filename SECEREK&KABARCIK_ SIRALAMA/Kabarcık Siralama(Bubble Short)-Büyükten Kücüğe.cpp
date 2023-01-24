# include <stdio.h>
main (void)
{
	int d[9]; 
	int i, j, g, s = 9 ;
	
	// sýralanacak dizinin okunmasý

	printf ( "Siralanacak diziyi girin:\n" );
	for (i=0; i<9; ++i) 
		scanf ("%d",&d[i]) ;

	// iþlemin ilk döngüsü: bütün dizinin 1 kere taranmasý için
	
	for (i=0; i<s-1; ++i) // 1.for, dizi boyundan 1 eksik döngü
	{
		printf ( "\ni= %d \n" ,i);

	// ikinci döngü: yanyana elemanlarý karþýlaþtýrýp,küçükleri yer deðiþtirmek için( sondan baþa gelerek küçük elemaný baþa doðru getiriyor)

		for (j=0; j<s-1-i; ++j)  // 2.for
		{
			if (d[j] > d[j+1]) // küçük elemaný bulmak için karþýlaþtýrma (saðdaki elemanýn soldaki elemandan küçük olup olmadýðýný kontrol ediyor)(büyük yapmak için if içindeki operatörü < yapmamýz yeterlidir)
			{
				printf ( " \n %d  ile  %d  yer degistirir\n", d[j], d[j+1]) ;
				g     = d[j];	// elemanýn saklanmasý
				d[j]  = d[j+1];	// küçük elemanýn yerleþtirilmesi 	
				d[j+1]= g;	 
				printf ( "\n\n");
				for (int k=0; k<9; ++k)  printf ( " %d",d[k] );
								
			}	// if kapat
		}	// 2. for kapat

	}	// 1. for kapat
	
	// sýralanan dizinin yazdýrýlmasý 

	printf ( "\nSiralanan dizi\n" );

	for (i=0; i<9; ++i) 
		printf ( " %d",d[i] );

	printf ( "\nprogram bitti\n") ;

}


