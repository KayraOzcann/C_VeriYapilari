#include <stdio.h>
#define boyut 10 
   int head = 0;
   int uzunluk= 0;
   int tail = 0;
   int dizi [boyut];
 
        bool doluMu(){
            if(head+1 == boyut){
                return true;
            }
            return false;
        }

        bool bosMu(){
            if(uzunluk == 0)
                return true;
            return false;
        }
        
        void listele(){
			int i;
			printf (" \n");
			for (i=0; i < boyut; i++) printf (" %d ",dizi[i]);
			printf (" \n");
		}
       
	    void ekle(int deger){
            if(doluMu()){
                printf ("Kuyruk kapasitesi dolu!\n");
            }else{
                dizi[tail] = deger;
                tail++;
                uzunluk++;
                printf (" %d kuyruga eklendi. Kuyrukta %d eleman var\n",deger,uzunluk);
            }
            listele();
        }
		
		void cikar(){
			int i;
            if(bosMu()){
                printf ("Kuyruk bos!\n");
            }else{
            	uzunluk--;
                printf (" %d kuyruktan cikarildi, Kuyrukta %d eleman var.\n",dizi[head],uzunluk);
                dizi[head] = 0;//-1;
                head++;							
            }
            listele();
        }

int main(){
   int deger, islem;

do{
    printf("Push => 1, Pop => 0 Listele =>2 : ");
    scanf("%d",&islem);
    if (islem == 1) // push
   	{	printf("\nkomut Push\n");
	    printf("Bir sayi giriniz :");
   	    scanf("%d",&deger);
   	    ekle(deger);
	}
	if (islem == 0) // pop
   	{	
   	    printf("\nkomut Pop\n");
   	    cikar();
	}
	if (islem == 2)
	{
		listele();
	}

}
while (islem >= 0) ;
}


