#include<stdio.h>
int p(int a,int b)
{
  printf("%d\n",a*b);
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  p(a,b);
}
