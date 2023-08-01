#include<stdio.h>
int fibo(int n)
{
      if(n<=1)
	 return n;
      return fibo(n-1) + fibo(n-2);
}
int main()
{
      int r = fibo(50000);
      printf("%d",r);
      return 0;
}
