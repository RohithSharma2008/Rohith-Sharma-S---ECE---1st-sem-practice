#include<stdio.h>
int digitsum(int n)
{
  int d=0,s=0;
  while(n!=0)
  {
    d=n%10;
    s=s+d;
    n/=10;
  }
  printf("%d\n",s);
}
int main()
{
  int n;
  scanf("%d",&n);
  digitsum(n);
}
