#include<stdio.h>
#include<math.h>
float f(float x)
{
	return 1/(1+x*x);
}
main()
{	int n,i;
	float s1=0,s2=0,sum,a,b,h;	
	printf("Enter the values of lower limit & upper limit: ");
	scanf("%f%f",&a,&b);
	printf("Enter the number of intervals ");
	scanf("%d",&n);
	h=(b-a)/n;
	if(n%2==0)
		{for(i=1;i<n;i++)
			{if(i%2==0)
				s1=s1+f(a+i*h);
			else
				s2=s2+f(a+i*h);}
		sum=h*(f(a)+f(b)+4*s2+2*s1)/3;
		printf("The value is=%.4f",sum);
		}
	else
		printf("The rule is not applicable");
    }

