/*eular method*/
#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return (y-x)/(y+x);
}
int main()
{
	float x0,y0,xn,h;
	printf(" enter the value of x0,y0 & xn:\n");
	scanf("%f%f%f",&x0,&y0,&xn);
	printf("enter step length:\n");
	scanf("%f",&h);
	do
	{
	y0=y0+h*f(x0,y0);
	x0=x0+h;
	}
	while(x0<xn);
	printf("the value of y0 is:%f",y0);
	
}

