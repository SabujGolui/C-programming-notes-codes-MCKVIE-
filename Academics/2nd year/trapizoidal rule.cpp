/* Trapezoidal Rule*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x)
{
    return 1/(1+x*x); //function of which integration is to be calculated
}
 main()
{
	float s=0.0,sum=0.0,a,b,h;
	int n,i;
	printf("enter the value of lower limit & upper limit:\n");
	scanf("%f%f",a,b);
	printf("enter the number of intervals:");
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=1;i<n;i++)
	{
		s=s+f(a+(i*h));
	}
	sum=h*(f(a)+f(b)+2*s)/2;
	printf("the value of the sum is:%0.4f",sum);
}
