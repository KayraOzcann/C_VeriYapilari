#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm; //5*4=20 byte
    printf("Terim sayisini girin: ");
    scanf("%d", &n);
    printf("Fibonacci Series: "); //3
 
    for (i = 1; i <= n; ++i){//2n+2 
        printf("%d, ", t1);//n
        nextTerm = t1 + t2;//n
        t1 = t2;//n
        t2 = nextTerm;//n
       
    }
    return 0;
}
   

