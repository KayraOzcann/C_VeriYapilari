#include<stdio.h>
void buydenkuc(int array[],int size){
	int enbuy;
	
	for(int i=0;i<size;i++){
		enbuy  = i;
		for(int j=i;j<size;j++){
			if(array[j]>array[enbuy]){
				enbuy= j;
			}
		}
		int a = array[i];
		array[i] = array[enbuy];
		array[enbuy] = a;
	}
}

int main(){
	int array[5],i;
	printf("5 elemanli icin deger giriniz\n");
	for(i=0;i<5;i++) scanf("%d",&array[i]);
	int n = sizeof(array)/sizeof(array[0]);
    buydenkuc(array,n);
	for(i =0;i<n;i++){
		printf("%d ",array[i]);
	}
}
