//WAP to test the file is exist or not
#include<stdio.h>
int main()
{
  FILE *fp = fopen("data.txt","r");
if(fp ==NULL)
{
printf("File doesn't exist\n");
return 0;
}
else 
printf("File is exist\n");
}
// using cmd line argumet
//program 2:
#include<stdio.h>

int main(int argc, char **argv)
{
  if(argc ! = 2)
{
printf("Usage : ./a.out filename\n");
return 0;
}
  FILE *fp = fopen("new.txt","r");
  if (fp == NULL)
{
printf("File doesn't exist\n");
return 0;
}
else 
printf("File is exist\n");
}
