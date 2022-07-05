#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
 FILE *fs,*ft;
char ch;
 if(argc!=3)
 {
  printf("Invalide numbers of arguments.");
  return 1;
 }
 fs=fopen(argv[1],"r");
 ft=fopen(argv[2],"w");
 if(fs==NULL || ft==NULL)
 {
  printf("FILE OPENNING ERROR OR FILR NOT FOUND.");
  return 1;
 }
ch=fgetc(fs);
 while(ch!=EOF)
 {
  fputc(ch,ft);
  ch=fgetc(fs);
 }
 printf("\n file copy successful");
 fclose(fs);
 fclose(ft);
 return 0;
}


