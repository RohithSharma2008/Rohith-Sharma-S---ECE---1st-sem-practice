#include<stdio.h>
int c(int a)
{
  printf("%d\n",a*a*a);
}
int main()
{
  int a;
  scanf("%d",&a);
  c(a);
}
