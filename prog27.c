#include<stdio.h>
int add(int a,int b)
{
  printf("%d\n",a+b);
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  add(a,b);
}
