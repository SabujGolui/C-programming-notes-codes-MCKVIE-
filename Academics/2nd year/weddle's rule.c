#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x)
{
	return (x*exp(x));
}
int main()
{
	float a,b,h,s=0;
	int n,i;
	printf("enter lower limit:");
	scanf("%f",&a);
	printf("enter upper limit:");
	scanf("%f",&b);
	printf("enter subintervals:");
	scanf("%d",&n);
	if(n%6==0)
	{
		h=(b-a)/n;
		for(i=0;i<n;i=i+6)
		s=s+f(a+(i+0)*h)+5*f(a+(i+1)*h)+f(a+(i+2)*h)+6*f(a+(i+3)*h)+f(a+(i+4)*h)+5*f(a+(i+5)*h)+f(a+(i+6)*h);
	    s=s*(3*h/10);
		printf("the value is:%f",s);
	}
	else
printf(" rule is not applicable");
}

