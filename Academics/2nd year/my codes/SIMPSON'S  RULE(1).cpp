/*SIMPSON'S 1/3 RULE*/
#include<stdio.h>
#include<math.h>
 float f(float x)
{
  return x/(1+x);
}
 main()
 {
  int n,i;
  float a,b,h,x,sum=0,integral;
  printf("Enter the initial limit:\n");
  scanf("%f",&a);
  printf("Enter the final limit:\n");
  scanf("%f",&b);
  printf("Enter the no. of sub-intervals(EVEN):\n");
  scanf("%d",&n);
  h=fabs(b-a)/n;
  if(n%2==0)
{
	for(i=1;i<n;i++)
  {
    x=a+i*h;
    if(i%2==0)
	{
      sum=sum+2*f(x);
    }
    else
	{
      sum=sum+4*f(x);
    }
  }
  integral=(h/3)*(f(a)+f(b)+sum);
  printf("\nThe integral is: %f \n",integral);
}else
printf(" error");
}
