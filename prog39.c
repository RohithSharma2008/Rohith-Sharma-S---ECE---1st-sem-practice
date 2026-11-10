#include<stdio.h>
int main()
{
  int n,O=0,E=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2==0)
      E++;
    else
      O++;
  }
  printf("Even Count=%d\nOdd Count=%d\n",E,O);
}
