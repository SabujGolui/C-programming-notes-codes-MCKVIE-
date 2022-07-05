#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (x*x*x-3*x-5);}
float d(float x)
{
	return (3*x*x-3);}
main()
{	float x0,x1,err=0.0001;	
	printf("Enter the initial guess: ");
	scanf("%f",&x0);
	if(d(x0)!=0)
		{do
			{x1=x0;
			x0=x0-f(x0)/d(x0);}
		while(fabs(x1-x0)>=err);
		printf("Root=%.3f",x0);}
}

