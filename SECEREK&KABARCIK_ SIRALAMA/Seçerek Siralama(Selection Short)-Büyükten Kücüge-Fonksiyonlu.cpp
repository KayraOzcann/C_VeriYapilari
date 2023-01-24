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
	int array[] = {1,3,6,5,7,8,2,4};
	int n = sizeof(array)/sizeof(array[0]);
    buydenkuc(array,n);
	for(int i =0;i<n;i++){
		printf("%d ",array[i]);
	}
}
