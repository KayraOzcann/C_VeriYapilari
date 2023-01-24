#include <stdio.h>


int ekle(int basl, int son);


int main()
{
    int basl, son, top;
    
    
    printf("sayi giriniz: ");
    scanf("%d", &basl);
    printf("bir sayi daha  giriniz: ");
    scanf("%d", &son);
    
    top = ekle(basl, son);
    
    printf("iki sayi arasýndaki toplam %d - %d = %d", basl, son, top);
    
    return 0;
}



int ekle(int basl, int son)
{
    if(basl == son)
        return basl;
    else
        return basl + ekle(basl + 1, son); 
}
