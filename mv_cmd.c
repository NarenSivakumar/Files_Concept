//WAP to implement copy cmd using file concept
#include<stdio.h>

int main()
{
  FILE *fs = fopen("data.txt","r");
  if(fs ==NULL)
{
printf("File doesn't exist\n");
return 0;
}
FILE *fd = fopen("new.txt","w");
 char ch;
while ((ch = fgetc(fs))!= EOF)
{
  fputc(ch,fd);
} 
fclose(fs);
fclose(fd);
remove("data.txt");
printf("file is successfully moved..n");
}
  
