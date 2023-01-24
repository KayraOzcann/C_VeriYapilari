#include<stdio.h>
int f(int);

int main()
{
  int n, i = 0, c; //4*3=12 byte

  printf("Terim sayisini girin:");

  scanf("%d", &n);

  printf("Fibonacci dizisi terimleri:\n");
//3
  for (c = 1; c <= n; c++) //1 + x + (x+1) 
  {
    printf("%d\t", f(i));
    i++; //x
  }

  return 0;
}

int f(int n) //4*1=4 byte
{
  if (n == 0 || n == 1) //2n
  {
  	
    return n; //1
  }  
    else
    return (f(n-1) + f(n-2)); //2n
}
