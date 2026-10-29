#include<stdio.h>
int main()
{
  int N,n,count1=0,count2=0;
  scanf("%d",&N);
  for(int i=1;N>=i;i++)
  {
    scanf("%d",&n);
    if(n>50)
     count1++;
    else if(n<=50)
     count2++;
  }
  printf("%d %d",count1,count2);
}
