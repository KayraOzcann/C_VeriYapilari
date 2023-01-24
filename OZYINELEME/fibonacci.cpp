/* 1911141022-Kayra Özcan */

#include <stdio.h>
 int fib1(int sayi){
	if(sayi==1||sayi==2)
	return 1;
	
	printf(" sayi=%d ", sayi);
	
	return fib1(sayi-1) + fib1(sayi-2);
}


int fib2(int sayi1 ){
	
	int i1=1,i2=1,veri=0;
	
	if(sayi1==1||sayi1==2)
	return 1;
	
	for (int i =0;i<sayi1-2;i++)
	{
		veri = i1;
		i1=i2;
		i2=veri+i2;
		printf (" j2 =%d ",i2);	
	}
	return i2;
	
}



int main(){
	

	int i;
	printf(" sayiyi girin \n");
	scanf("%d",&i);
	printf("  \n");
	printf(" fib(%d) = %d ",i,fib1(i));

	return 0;
	

}

/* Özyenilemeli =   - Output Size: 128,7880859375 KiB
                    - Compilation Time: 0,55s 
                    
   Özyenlimesiz =   - Output Size: 128,7880859375 KiB
                    - Compilation Time: 0,44s
*/





