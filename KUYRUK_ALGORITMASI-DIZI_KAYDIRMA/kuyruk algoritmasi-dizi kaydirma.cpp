
#include <stdio.h>
#define boyut 10 
   int head = 0;
   int uzunluk= 0;
   int tail = 0;
   int dizi [boyut];
   int baslangic = 0 ;
   int bitis = 0 ;
 
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
                printf (" %d kuyruktan cikarildi, Kuyrukta %d eleman var.\n",dizi[1],uzunluk);
             
               tail--; 
              		
				for (i=0;i<=bitis;i++)
                {
                	dizi[i] = dizi[i+1];
                	
				}	
				bitis --;				
            }
            listele();
        }
        void listeleme (){
        	
        	int i;
			printf (" \n");
	
		for (i=0; i < bitis; i++) printf (" %d ",dizi[i]);
			printf (" \n");
        		printf (" dizide %d tane eleman var \n",bitis-0);
		}

int main(){
	int islem,deger;
   do{
   
    printf("ekle => 1, cikar => 0 ,listele => 2 :");
    scanf("%d",&islem);
    if (islem == 1) 
   	{	printf("\nkomut ekle\n");
	    printf("Bir sayi giriniz :");
   	    scanf("%d",&deger);
   	    ekle(deger);
   	    bitis ++ ;
	}
	if (islem == 0) 
   	{	
   	    printf("\nkomut cikar\n");
   	    cikar();
   	    baslangic ++ ;
	}
    listele ();
    	if (islem == 2)
    	{
    		listeleme ();
		}
}
while (islem >= 0) ;


    
    
    
    return 0;
}
