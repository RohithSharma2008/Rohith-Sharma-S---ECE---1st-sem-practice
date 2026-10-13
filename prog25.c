#include<stdio.h>
int add(int x,int y)
{
  printf("%d\n",x+y);
}
int sub(int x,int y)
{
  printf("%d\n",x-y);
}
int check(int x,int y)
{
  (x==y)?printf("Equal\n"):printf("not Equal\n");
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  add(a,b);
  sub(a,b);
  check(a,b);
}
