/*Regula Falsi mthod*/
#include <stdio.h>
#include <math.h>
float f(float x)
{
	return (x*x*x-2*x+1);
}
int main()
{
	float a,b,e,x;
	while(1)
	{
		printf("enter the value of a & b:\n");
    	scanf("%f%f",&a,&b);
       if(f(a)*f(b)<0.0)
     	break;
	printf("enter a new intervals again ");
	}
	printf("enter error value:");
	scanf("%f",&e);
	do 
	{ 
	x=(a*f(b)-b*f(a))/(f(b)-f(a));
	if (f(x)*f(a)>=0.0)
	b=x;
	else
     a=x;
	}
	while (fabs(a-b)>0.0);
	{
	printf("one real root is :%0.3f",x);
	}
}
