#include<stdio.h>
#include<stdlib.h>
int main ()
{

	int aranan,a=0,i,j,matris[4][3];
    
	printf("Matris degerlerini giriniz: ");
    for(int x=0; x<4; x++)
    for(int y=0; y<3; y++){
    printf("[%d][%d]= ", x+1, y+1);
    scanf("%d", &matris[x][y]);
    } 
	
    printf("aramak istediginiz degeri giriniz");
    scanf("%d",&aranan);
    
	for (i=0;i<4;i++)
	{
	for(j=0;j<3;j++)
		{
			if(aranan == matris[i][j])
			{
				printf("\n aradiginiz sayi matrisin %d. satirinin %d. sutun da\n ",i+1,j+1);
				a++;
			}
		}
		
	}
	if(a==0)
	{printf("aradiginiz sayi bulunamadi\n");
	
	}

	else if (a>0)
	{
	printf("aradiginiz sayidan %d tane var\n ",a);
	
	}
	
}

