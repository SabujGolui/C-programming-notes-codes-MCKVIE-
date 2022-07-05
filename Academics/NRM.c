/* Newton raphson method */
#include<stdio.h>
#include<math.h>
float f(float z)
{
	return (z*exp(z)-1);
}
float f1(float z)
{
	return (z*exp(z)-exp(z));
}
int main ()
{
	float x0,x,e;
	printf(" enter the initial guess of root : ");
	scanf(" %f",&x0);
	printf(" enter the error value:");
	scanf("%f",&e);
	do
	{
		x=x0;
		x0=x0-f(x0)/f1(x0);
	}
	while (fabs(x-x0)>e);
	printf("one real root of the equation is :%0.3f",x);
}
