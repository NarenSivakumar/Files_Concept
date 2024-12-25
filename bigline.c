//WAP to find the big line length
#include<stdio.h>
int main()
{
  FILE *fp = fopen("data.txt","r");
  if(fp ==NULL)
{
printf("File doesn't exist\n");
return 0;
}
int count = 0, bigline = 0, biglinelength = 0, line = 0; 
char ch;
while ((ch = fgetc(fp)) != EOF)
{
    ++count;
    if(ch == '\n');
  line++;
   if(count > biglinelength)
{
  biglinelength = count;
  bigline = line;
}
count = 0;
}
printf("lines = %d, bigline length = %d, bigline = %d, count = %d\n",line,biglinelength,bigline,count);
}
