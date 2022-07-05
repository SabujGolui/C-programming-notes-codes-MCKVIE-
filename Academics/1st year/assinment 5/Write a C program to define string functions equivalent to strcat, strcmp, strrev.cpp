#include<stdio.h>
void strconcat(char *,const char *);
int strcompr(char *,char *);
void strreverse(char *);
int main()
{
	char a[100],b[100];
	int ch,x;
	printf("\n1.Press 1 to concatenate two strings\n 2.Press 2 to compare two strings\n 3.Press 3 to reverse a string\n");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter the first string: ");
			
          scanf("%s",a);

			       	printf("\nEnter the second string: ");
		
           scanf("%s",b);
           printf("Concatenated  string is ");
			       	strconcat(a,b);
		       		puts(a);
			       	break;
		case 2: printf("\nEnter the first string: ");
				
          scanf("%s",a);
				      printf("\nEnter the second string: ");
				
          scanf("%s",b);
				     x=strcompr(a,b);
          if(x==0)
                printf("Both strings are equal");
           else if(x>0)
                 printf("First string is bigger");
           else
                 printf("Second string is bigger");
				
			              	break;
		case 3: printf("Enter a string\n");
   		
         scanf("%s",a);
			      strreverse(a);
 				     printf("Reverse of the string is %s\n", a);	
			      	break;
		default: printf("\nWrong choice");		 			
	}
return 0;
}
void strconcat(char *a,const char *b)
{
	while(*a!='\0')
	{
		a++;
	}
	*a=' ';
	a++;
	while(*b!='\0')
	{
		*a=*b;
		a++;
		b++;
	}
	*a='\0';
}
int strcompr(char *a,char *b)
{
	while(*a!='\0' && *b!='\0')
	{
		if(*a!=*b)
			break;
		else 
			{
				a++;
				b++;
				}	
	}
	if(*a==*b)
	return 0;
	else if(*a>*b)
	return 1;
	else
	return -1;
}
void strreverse(char *a)
{
   int len, i;
   char temp;
 
   for(len=0;a[len]!='\0';len++);
  
   for (i = 0; i < len/2; i++)
   {        
      temp   = a[i];
      a[i]   = a[len-1-i];
      a[len-1-i] = temp;
   }
}
