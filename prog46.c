#include<stdio.h>
int main()
{
  char s[1000];
  FILE*p;
  p=fopen("File.txt","r");
  fgets(s,1000,p);
  printf("%s\n",s);
}
