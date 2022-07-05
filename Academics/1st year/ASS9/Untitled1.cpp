#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *fs,*ft;
 int ch;
 fs=fopen("sa1.txt","r");
 ft=fopen("sa2.txt","w");
 if(fs==NULL || ft==NULL)
 {
  printf("\n CANNOT OPEN FILE");
  exit(1);
 }

 while(1)
 {
  ch=fgetc(fs);
  if(ch==EOF)
  break;
  fputc(ch,ft);
 }
printf("\n file copy successful");
 fclose(fs);
 fclose(ft);
 return 0;
}

