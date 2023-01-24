#include <stdio.h>
#define boyut 10 
// yigin
int yigin[boyut];
int es=0,i,veri=0;
void Push(int veri) 
{		int i;
    	if(es>=boyut)
   		 { printf("\n yigin dolu..."); return; }
   
        yigin[es]=veri;
        printf("%d yigina eklendi..\n",veri);
        es++;
        printf("\n");
        for(i=0;i<es;i++)  printf(" %d",yigin[i]);
        printf("\n");
   
}
void Pop() 
{ 		int i;
    	if(es<=0)
    		{	printf("yigin bos!"); return; }
        printf("\n%d yigintan cikarildi..\n",yigin[es-1]);
        es--;
        printf("\n");
        for(i=0;i<es;i++)  printf(" %d",yigin[i]);
        printf("\n");
    
}
int main()
{	int deger, islem;

do{
   
    printf("Push => 1, Pop => 0 :");
    scanf("%d",&islem);
    if (islem == 1) // push
   	{	printf("\nkomut Push\n");
	    printf("Bir sayi giriniz :");
   	    scanf("%d",&deger);
   	    Push(deger);
	}
	if (islem == 0) // pop
   	{	
   	    printf("\nkomut Pop\n");
   	    Pop();
	}
    printf("\nyigin son durum ...\n");
    for(i=0;i<es;i++)  printf("[%d]=%d\n",i,yigin[i]);
    printf("\n");
}
while (islem >= 0) ;

}

