# include <stdio.h>
main (void)
{
	int d[9]; 
	int i, j, g, s = 9 ;
	
	// s�ralanacak dizinin okunmas�

	printf ( "Siralanacak diziyi girin:\n" );
	for (i=0; i<9; ++i) 
		scanf ("%d",&d[i]) ;

	// i�lemin ilk d�ng�s�: b�t�n dizinin 1 kere taranmas� i�in
	
	for (i=0; i<s-1; ++i) // 1.for, dizi boyundan 1 eksik d�ng�
	{
		printf ( "\ni= %d \n" ,i);

	// ikinci d�ng�: yanyana elemanlar� kar��la�t�r�p,k���kleri yer de�i�tirmek i�in( sondan ba�a gelerek k���k eleman� ba�a do�ru getiriyor)

		for (j=0; j<s-1-i; ++j)  // 2.for
		{
			if (d[j] > d[j+1]) // k���k eleman� bulmak i�in kar��la�t�rma (sa�daki eleman�n soldaki elemandan k���k olup olmad���n� kontrol ediyor)(b�y�k yapmak i�in if i�indeki operat�r� < yapmam�z yeterlidir)
			{
				printf ( " \n %d  ile  %d  yer degistirir\n", d[j], d[j+1]) ;
				g     = d[j];	// eleman�n saklanmas�
				d[j]  = d[j+1];	// k���k eleman�n yerle�tirilmesi 	
				d[j+1]= g;	 
				printf ( "\n\n");
				for (int k=0; k<9; ++k)  printf ( " %d",d[k] );
								
			}	// if kapat
		}	// 2. for kapat

	}	// 1. for kapat
	
	// s�ralanan dizinin yazd�r�lmas� 

	printf ( "\nSiralanan dizi\n" );

	for (i=0; i<9; ++i) 
		printf ( " %d",d[i] );

	printf ( "\nprogram bitti\n") ;

}


