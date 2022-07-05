 #include<stdio.h> 
 int main()
 {
 	int a[ ] = {2,4,6};
	  int *p = a;
	   printf("%d",*++p + *p++);
 }

