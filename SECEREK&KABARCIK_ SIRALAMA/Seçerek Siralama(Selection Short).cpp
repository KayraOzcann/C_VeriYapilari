# include <stdio.h> 
 // se�meli s�ralama
 int main (void) 
{ 
int d[5];  
int i, j, sr, g, ek, f ; 
 
// s�ralanacak dizinin okunmas� 
 
printf( "Siralanacak 5 elemanli diziyi girin: ") ; 
for (i=0; i<5; ++i)  
scanf (" %d",&d[i]) ; 
 
 
// i�lemin ilk d�ng�s�: bulunan en k���k eleman yerle�tirilir 
 
for (i=0; i<4; ++i) // 1.for 
{ 
printf( "\ni=%d", i); 
 
// en k���k eleman�n en ba�taki olmas� olas�l��� i�in 
 
ek = d[i];// ba�taki eleman�n saklanmas� 
sr = i;// ba�taki eleman�n s�ras�n�n saklanmas� 
 
// ikinci d�ng�: en k���k eleman aran�r 
 
for (j=i+1; j<5; ++j)  // 2.for 
{ 
printf( "\n\t\tj=%d ek=%d d[%d]=%d",j,ek,j,d[j]) ; 
 
if (ek > d[j]) // k���k eleman� bulmak i�in kar��la�t�rma 
{ 
ek = d[j];  // k���k eleman�n saklanmas� 
sr = j;// k���k eleman�n adresinin saklanmas� 
 
printf(" %d saklandi  ",ek);  
 
}// if kapat 
}// 2. for kapat 
 
printf( "\n %d.tur ek=%d adr=%d",i+1,ek,sr); 
 
// bulunan k���k eleman�n ba�lara yerle�tirilmesi 
g     = d[i]; // en ba�taki eleman�n saklanmas� 
d[i]  = ek;  // k���k eleman�n ba�a yerle�tirilmesi  
d[sr] = g;  // en ba�taki eleman�n k���k olan�n s�ras�na yerle�tirilmesi 
 
printf( " %d.siradaki %d  ile yeri degisti\n",i,g); 
        for (f=0; f<5; ++f) printf( " %d", d[f]); 
 
}// 1. for kapat 
 
// s�ralanan dizinin yazd�r�lmas�  
 
printf( "\nSiralanan dizi:  ") ; 
 
for (i=0; i<5; ++i)  
printf( " %d",d[i] ); 
 
printf( "  program bitti") ; 
 
}
