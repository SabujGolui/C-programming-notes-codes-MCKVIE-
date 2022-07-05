#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50], str2[50];
	int i=0,length=0;
    printf("enter a string ");
	gets(str1);
	while(str1[i]!='\0')
	{
		length++;
		i++;
	}
	printf("the length of the string %s = %d\n",str1,length);
	i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	printf("i=%d\n",i);
	str2[i]='\0';
	printf("the 2nd string is= ");
	puts(str2);
}

