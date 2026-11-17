#include<stdio.h>
int main()
{ char ch;
  FILE*p;
  p=fopen("Vignesh payalugada Kudurama.txt","r");
  if(p==NULL)
    printf("File not create");
  fprintf(p,"Eyaketa moothatha\nVignesh payalugada Kudurama 😈️😈️😈️😈️😈️");
  while((ch=fgetc(p))!=EOF)
     printf("%c",ch);
  printf("\n");
  fclose(p);
}
