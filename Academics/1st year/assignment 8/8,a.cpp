#include<stdio.h>
main()
{int n,i,sum=0,a[n];
int *p=&a[n];
printf("Enter the total turms: ");
scanf("%d",&n);
printf("Enter the elements :\n");
for (i=0;i<n;i++)
	{scanf("%d",&a[i]);
	sum=sum+(*(p+i));}
printf("Sum of the elements = %d.",sum);
}

