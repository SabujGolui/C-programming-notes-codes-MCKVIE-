/*TRAPEZOIDAL RULE*/
#include<stdio.h>
#include<math.h>
 /* Define the function to be integrated here: */
float f(float x)
{
  return 1/(1+x*x);
}
 /*Program begins*/
main()
{
  int n,i;
  float a,b,h,x,sum=0,integral;
  /*Ask the user for necessary input */
  printf("Enter the initial limit:\n ");
  scanf("%f",&a);
  printf("Enter the final limit:\n ");
  scanf("%f",&b);
  printf("Enter the no. of sub-intervals:\n ");
  scanf("%d",&n);
  h=fabs(b-a)/n;
  for(i=1;i<n;i++)
  {
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);
  /*Print the answer */
  printf("\nThe integral is: %f\n",integral);
}
