#include<stdio.h>
int large(int a,int b)
{
  if(a>b)
   printf("%d\n",a);
  else if(b>a)
   printf("%d\n",b);
  else
   printf("Both The Numbers Are Equal\n");
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  large(a,b);
}
