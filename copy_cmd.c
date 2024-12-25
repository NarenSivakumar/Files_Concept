//WAP to implement cp command using file concept
#include<stdio.h>
int main(int argc, char **argv)
{
  FILE *fs = fopen ("source.txt","r");
  FILE *fd = fopen ("dest.txt","w");
if( fs != NULL)
{
  char ch;
  while((ch = fgetc(fs)) != EOF){
    fputc(ch,fd);
  }
  printf("File copied successfully\n");
  
}
else 
printf("No source file\n");
}
