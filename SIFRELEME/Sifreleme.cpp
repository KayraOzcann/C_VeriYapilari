#include <stdio.h>
#include <string.h>
#include <locale.h>

char* sifreleme(char tersi[])
{

      int i,a;
      char ch,kelime[100];
      for(i=0;i<strlen(tersi);i++)
      {
	      a=tersi[i];
		  a=90-(a-65);
		  ch=a;
		  kelime[i]=ch;	   
	  }
	  return kelime;    
} 


char* sifrecozumu(char sifrelikel[])
{

      int i,a;
      char ch,kelime2[100];
      for(i=0;i<strlen(sifrelikel);i++)
      {
	      a=sifrelikel[i];
		  a=90-(a-65);
		  ch=a;
		  kelime2[i]=ch;	   
	  }
	  return kelime2;
}


int main()
{
	 setlocale(LC_ALL, "Turkish");
     char girkel[100],tersi[100],sifrelikel[100];
	 printf("BÜYÜK HARFLERLE KELÝME GÝRÝNÝZ: ");
	 gets(girkel);
	 strcpy(tersi,sifreleme(girkel));
	 printf("\n Kelime Tersi: %s\n",tersi);
	 strcpy(sifrelikel,sifrecozumu(tersi));
	 printf("\n Metin orijinali: %s\n",sifrelikel);
	 return 0;   	
	
}
