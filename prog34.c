#include<stdio.h>
int check(int a)
{
 if(a<0)
   printf("Negative\n");
 else if(a>0)
   printf("Positive\n");
 else
   printf("Zero\n");
}
int main()
{
 int a;
 scanf("%d",&a);
 check(a);
}
