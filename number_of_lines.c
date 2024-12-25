//WAP to  find the number of lines and number of character in a file.
#include<stdio.h>
int main()
{
  FILE *fp = fopen("data.txt","r");
  if(fp ==NULL)
{
printf("file doen't exist");
return 0;
}
int line = 0, character = 0;
char ch;
while ((ch = fgetc(fp)) != EOF)
{
  ++character;
    if(character == '\n')
      line++;
}
printf("Lines : %d , character : %d \n",line,character);
}
