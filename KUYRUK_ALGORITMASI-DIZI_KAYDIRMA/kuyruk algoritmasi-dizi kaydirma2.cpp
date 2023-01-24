#include<stdio.h>
# define boyut 10
int kuyruk[boyut],uzunluk=0,elemansayisi=0,cikansayisi=0,i;

void Push (  )
{
	int sayi;
	if(elemansayisi>=boyut)
	{
		printf(" kuyruk dolu");
	}
	else 
	{	printf("\n push islemini sectiniz ekleyeceginiz sayiyi girin \n");
		scanf("%d",&sayi);
		kuyruk[elemansayisi]=sayi;
		elemansayisi ++;
		uzunluk ++;
		  for(i=0;i<boyut;i++) printf("%d ",kuyruk[i]);
	}
	
}

void Pop ()
{
	if(elemansayisi <= 0 )
	{
		printf(" kuyruk bos ");
	}
	else 
	{
		
	    //kuyruk[cikansayisi]=0;
		//cikansayisi++;
		
		for(i=1;i<uzunluk;i++)
		{
			kuyruk[i-1]=kuyruk[i];
		}
			kuyruk[uzunluk-1]=0;
		uzunluk--;
		  for(i=0;i<boyut;i++) printf("%d ",kuyruk[i]);
	}
	
	
}

int main(){
	
	int islem,sayi;
	do{
	printf("\nyapmak istediginiz islemi secin \n push => 1     pop=>0 \n");
	scanf("%d",&islem);
	if(islem==1)
	{
	
		Push();
	}
	else if( islem==0)
	{
		printf("pop islemini sectiniz \n");
		Pop();
	}
  
    
	}while(islem>=0);
	return 0;
}
