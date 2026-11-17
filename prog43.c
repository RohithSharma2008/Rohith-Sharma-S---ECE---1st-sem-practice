#include<stdio.h>
int main()
{
  FILE*p;
  p=fopen("Vignesh payalugada.txt","w");
  if(p==NULL)
    printf("File not create");
  fprintf(p,"Eyaketa moothatha😈️😈️😈️😈️😈️");
  fclose(p);
}
