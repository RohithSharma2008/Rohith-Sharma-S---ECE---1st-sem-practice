#include<stdio.h>
int main()
{
  int n,s=1;
  scanf("%d",&n);
  for(int i=0;i<=n;i++)
  {
    if(i==0)
    s=s*1;
    else
    s=s*i;
  }
  printf("%d\n",s);
}
