#include<stdio.h>
int large(int a,int b,int c)
{
  if(a>b && a>c)
   printf("%d\n",a);
  else if(b>a && b>c)
   printf("%d\n",b);
  else if(c>a && c>b)
   printf("%d\n",c);
  else
   printf("All The Numbers Are Equal\n");
}
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  large(a,b,c);
}
