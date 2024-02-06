#include<stdio.h>
int main()
{
  int a=20;
  int b=30;
  int c=45;
  int d=10;
  int e;
  e=(a+b)*c/d;
  printf("value of (a+b)*c/d is %d\n",e);
  e=((a+b)*c)/d;
  printf("value of ((a+b)*c)/d is %d\n",e);
  e=(a+b)*(c/d);
  printf("value of(a+b)*(c/d) is %d\n",e);
  e=a+(b*c)/d;
  printf("value of a+(b*c)/d is %d\n",e);
  e=a*(b+c)/d;
  printf("value of a*(b+c)/d is %d\n",e);
  return 0;
}