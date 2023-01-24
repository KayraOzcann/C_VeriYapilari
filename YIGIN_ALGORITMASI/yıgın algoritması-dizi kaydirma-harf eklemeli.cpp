#include <stdio.h>
#define boyut 10 
// yigin
char yigin[boyut];
int es=0,i;
char veri;
void Push(char veri) 
{		int i;
    	if(es>=boyut)
   		 { printf("\n yigin dolu..."); return; }
   
        yigin[es]=veri;
        printf(" %c yigina eklendi..\n",veri);
        es++;
        printf("\n");
        for(i=0;i<es;i++)  printf(" %c ",yigin[i]);
        printf("\n");
   
}
void Pop() 
{ 		int i;
    	if(es<=0)
    		{	printf("yigin bos!"); return; }
        printf("\n %c yigindan cikarildi..\n",yigin[es-1]);
        es--;
        printf("\n");
        for(i=0;i<es;i++)  printf(" %c ",yigin[i]);
        printf("\n");
    
}
int main()
{	int islem=-1;
	char deger;
  /*  printf("\nkomut Push 10\n");
	Push(10);
	printf("\nkomut Push 20\n");
    Push(20);
    printf("\nkomut Push 30\n");
    Push(30);
    printf("\nkomut Push 40\n");
    Push(40);
    printf("\nkomut Push 50\n");
    Push(50);
    printf("\nkomut Pop\n");
    Pop();
    printf("\nkomut Pop\n");
    Pop();*/
do{
   
    printf("Push => 1, Pop => 0 :");
    scanf("%d",&islem);
    if (islem == 1) // push
   	{
	   	printf("\nkomut Push\n");
	    printf("Bir harf giriniz :");
   	    scanf("%s",&deger);
   	    Push(deger);
	}
	else if (islem == 0) // pop
   	{	
   	    printf("\nkomut Pop\n");
   	    Pop();
	}
    printf("\nyigin son durum ...\n");
    for(i=0;i<es;i++)  printf("[%d]= %c \n",i,yigin[i]);
    printf("\n");
}
while (islem >= 0) ;
}

