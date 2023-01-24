#include <stdio.h>
#define boyut 10 
// yigin
int yigin[boyut];
int es=0,i,veri=0,a;
void Push(int veri) 
{		int i;
    	if(es>=boyut)
   		 { printf("\n yigin dolu..."); return; }
   
        yigin[es]=veri;
        	for(int i=es;i>0;i--)
        	{	
        	
        		a=yigin[i-1]; 															
        		yigin[i-1]=yigin[i];									
        		yigin[i]=a;										
			}
	
        printf("%d yigina eklendi..\n",veri);
        es++;
        printf("\n");
        for(i=0;i<es;i++)  printf(" %d",yigin[i]);
        printf("\n");
   
}
void Pop() 
{ 		int i;
		int a=0;
    	if(es<=0)
    		{	printf("yigin bos!"); return; }
    	yigin[0]=yigin[es];
        printf("\n%d yigindan cikarildi..\n",yigin[es-1]);
        es--;
        		for(int i=0;i<es;i++)
        	{
        		a=yigin[i];
				yigin[i]=yigin[i+1];
				yigin[i+1]=a;     						
			}
        printf("\n");
        for(i=0;i<es;i++)  printf(" %d",yigin[i]);
        printf("\n");
    
}
int main()
{	int deger, islem;
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

