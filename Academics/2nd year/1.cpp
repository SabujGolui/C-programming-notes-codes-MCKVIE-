/*Program for Newton-Raphson Method */
#include<stdio.h>
#include<math.h>
float f(float z);
float f1(float z);
int main()
{
	float x0,e,x;
	printf("Enter initial guess of root : ");
	scanf("%f",&x0);
	printf("Enter error value : ");
	scanf("%f",&e);
	while(1)
	{
		x=x0;
		x0=x0-f(x0)/f1(x0);
		if(fabs(x-x0)<e)
		break;
	}
	printf("One real root of the equation is :%0.3f",x0);
}
float f(float z)
{
	return (z*z*z+2*z+1);
}
float f1(float z)
{
	return (3*z*z+2);
}

