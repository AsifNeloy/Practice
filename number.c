#include<stdio.h>

int main()
{
          int a=1,b=2,c=3,temp;
          temp=a;
          a=b;
          b=c;
          c=temp;
          printf("a = %d b = %d c = %d",a,b,c);
          return 0;

}
