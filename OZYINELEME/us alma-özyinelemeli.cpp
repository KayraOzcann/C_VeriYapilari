#include<stdio.h>
float usal(float x,float y){
	
	if(x==0)
	   return(0);
	if(x>0&&y==0)
	   return(1);
	if(x>0&&y==1)
	   return(x);
	if(x>0&&y>1)         
	   return(usal(x,(y-1))*x);
}

int main(float a,int y)
{
	int n;
	float x;
	printf("Taban degeri giriniz:\n");
	scanf("%f",&x);
	printf("\nTavan degeri giriniz:\n");
	scanf("%d",&n);
	printf("\nsonuc:%2.f",usal(x,n));

	return 0;
}
