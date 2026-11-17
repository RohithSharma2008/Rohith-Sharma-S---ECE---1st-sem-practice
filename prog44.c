#include<stdio.h>
int main()
{
  FILE*p;
  p=fopen("File.txt","w");
  fputs("Rohith Sharma S\nECE-E\nKCE\n",p);
  fputc('A',p);
  fclose(p);
}
