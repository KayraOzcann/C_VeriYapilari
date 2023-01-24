#include<stdio.h>

void selectionSort(int array[],int size){
	int min;
	
	for(int i =0;i<size-1;i++){
		min = i;
		
		for(int j = i;j<size;j++){
			if(array[j]<array[min]){
				min = j;
			}
		}
		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}
int main(){
	int array[] = {1,3,6,5,7,8,2,4};
	int n = sizeof(array)/sizeof(array[0]);
	selectionSort(array,n);
	for(int i =0;i<n;i++){
		printf("%d ",array[i]);
	}
}
