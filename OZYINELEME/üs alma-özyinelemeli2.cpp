#include<stdio.h>
int usAl(int taban,int us) //4*4=16byte
{
    if(us==0) //1
     return 1; //1
    return taban * usAl(taban,us-1);  //n
}
int main()
{
    int taban,us;
    printf("Ussu alinacak sayiyi ve us degerini giriniz\n");
    scanf("%d %d",&taban,&us);
    printf("Cevap : %d",usAl(taban,us)); //3
    return 0;
}
