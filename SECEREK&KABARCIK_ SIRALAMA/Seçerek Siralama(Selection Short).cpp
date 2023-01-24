# include <stdio.h> 
 // seçmeli sýralama
 int main (void) 
{ 
int d[5];  
int i, j, sr, g, ek, f ; 
 
// sýralanacak dizinin okunmasý 
 
printf( "Siralanacak 5 elemanli diziyi girin: ") ; 
for (i=0; i<5; ++i)  
scanf (" %d",&d[i]) ; 
 
 
// iþlemin ilk döngüsü: bulunan en küçük eleman yerleþtirilir 
 
for (i=0; i<4; ++i) // 1.for 
{ 
printf( "\ni=%d", i); 
 
// en küçük elemanýn en baþtaki olmasý olasýlýðý için 
 
ek = d[i];// baþtaki elemanýn saklanmasý 
sr = i;// baþtaki elemanýn sýrasýnýn saklanmasý 
 
// ikinci döngü: en küçük eleman aranýr 
 
for (j=i+1; j<5; ++j)  // 2.for 
{ 
printf( "\n\t\tj=%d ek=%d d[%d]=%d",j,ek,j,d[j]) ; 
 
if (ek > d[j]) // küçük elemaný bulmak için karþýlaþtýrma 
{ 
ek = d[j];  // küçük elemanýn saklanmasý 
sr = j;// küçük elemanýn adresinin saklanmasý 
 
printf(" %d saklandi  ",ek);  
 
}// if kapat 
}// 2. for kapat 
 
printf( "\n %d.tur ek=%d adr=%d",i+1,ek,sr); 
 
// bulunan küçük elemanýn baþlara yerleþtirilmesi 
g     = d[i]; // en baþtaki elemanýn saklanmasý 
d[i]  = ek;  // küçük elemanýn baþa yerleþtirilmesi  
d[sr] = g;  // en baþtaki elemanýn küçük olanýn sýrasýna yerleþtirilmesi 
 
printf( " %d.siradaki %d  ile yeri degisti\n",i,g); 
        for (f=0; f<5; ++f) printf( " %d", d[f]); 
 
}// 1. for kapat 
 
// sýralanan dizinin yazdýrýlmasý  
 
printf( "\nSiralanan dizi:  ") ; 
 
for (i=0; i<5; ++i)  
printf( " %d",d[i] ); 
 
printf( "  program bitti") ; 
 
}
