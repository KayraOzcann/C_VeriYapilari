#include<stdio.h>
#include <stdlib.h>

void say(char *x,char ch)
{
	
	int say = 0;
	
	while(*x)
	{
		if(*x == ch)
		{
			say++;
		}
		
		x++;
		
	}
	
	printf("%c Harfinden %d tane bulundu\n",ch,say);

	
}

int main()
{
	
	char *str = "BilgisayarMuhendisligiBolumuxbubirisaretcibildirimi";
	char ch;
	
	printf("Hangi harfi saydirmak istiyorsunuz : ");
	
	scanf("%c",&ch);
	say(str,ch);
	
	return  0;
}
