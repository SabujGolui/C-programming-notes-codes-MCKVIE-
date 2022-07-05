#include<stdio.h>
#include<math.h>
float f(float x)
{
  return x/(1+x*x);
}
int main()
{
	float a,b,h,s=0.0;
	int n,i;
	printf("enter the lower limit & upper limit:");
	scanf(" %f%f",&a,&b);
	printf("\nEnter the no. of sub-intervals(EVEN): ");
    scanf("%d",&n);
    if(n%2==0)
    {
    	h=(b-a)/n;
    	for(i=0,i<n,i=i+2)
    	{
    		s=s+f*(a+(i+0)*h)+4*f*(a+(i+1)*h)+f*(a+(i+2)*h);
		}
		s=0.3*h*s;
		printf(" the value of the sum is:%f",s);
	}
	else
	printf("no applicable");
     
}
	

