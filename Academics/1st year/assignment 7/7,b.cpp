#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (x*x*x-3*x-5);}
main()
{	float a,b,x,err=0.0001;
	do	
	{
		printf("Enter the values of a, b :");
		scanf("%f%f",&a,&b);
	}
	while(f(a)*f(b)>0);
	do
		{x=(b+a)/2;
		if(f(a)*f(x)<0)
			b=x;
		else
			a=x;}
	while(fabs(f(x))>=err);
	printf("Root=%.3f",x);
	return 1;
}


