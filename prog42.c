#include<stdio.h>
int digit(int x)
{  
  int sum=0;
  while(x!=0)
  {  sum+=x%10;
     x/=10;
  }
  return sum;
}
int main()
{
  int n,temp1,d=0;
  scanf("%d",&n);
  temp1=n*n;
  d=digit(temp1);
  if(n==d)
    printf("Neon Number\n");
  else
    printf("Not Neon Number\n");
}
