#include<stdio.h>
int main()
{
  int i=1,a,b;
  scanf("%d %d",&a,&b);
  switch(i)
  { case 1:
      printf("%d\n",a+b);
    case 2:
      printf("%d\n",a-b);
    case 3:
      printf("%d\n",a*b);
    case 4:
      printf("%.2f\n",(float)a/b);
    case 5:
      printf("%d\n",a%b);
    default:
      printf("\n");
  }
}
