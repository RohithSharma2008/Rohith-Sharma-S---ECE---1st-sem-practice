#include<stdio.h>
int main()
{
  int n,d=0,p=1;
  scanf("%d",&n);
  if(n==0)
    p=0;
  else
  {
    while(n!=0)
    {
      d=n%10;
      p=p*d;
      n=n/10;
    }
   }
   printf("%d\n",p);
}
