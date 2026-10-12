#include<stdio.h>
int main()
{
  int n,d=0,s=0;
  scanf("%d",&n);
  if(n==0)
    s=0;
  else
  {
    while(n!=0)
    {
      d=n%10;
      s=s+d;
      n=n/10;
    }
   }
   printf("%d\n",s);
}
