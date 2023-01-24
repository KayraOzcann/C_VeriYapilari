#include<stdio.h>
#include<stdlib.h>
int main ()
{

	int aranan,x=0,i,j;
	int matris[5][5]={{9,2,6,11,13},{8,3,15,9,11},{2,8,7,1,13},{14,6,14,4,1},{4,8,10,15,3}};
    printf("1 den 15 kadar bir sayi giriniz: ");
    scanf("%d",&aranan);
	
	for (i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
		{
			if(aranan == matris[i][j])
			{
				printf("\n aradiginiz sayi matrisin %d. satirinin %d. sutun da\n ",i+1,j+1);
				x++;
			}
		}
		
	}
	if(x==0)
	{printf("aradiginiz sayi bulunamadi\n");
	
	}

	else if (x>0)
	{
	printf("aradiginiz sayidan %d tane var\n ",x);
	
	}
	
}

