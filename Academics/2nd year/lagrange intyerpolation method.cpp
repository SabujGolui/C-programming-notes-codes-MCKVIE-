#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *x,*y,X,p,s=0.0;
	int i,j,n;
	printf("Enter the value of n:");
	x=(float *)malloc(n*sizeof(float));
	y=(float *)malloc(n*sizeof(float));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter x%d:",i+1);
		scanf("%f",&x[i]);
		printf("enter y%d:",i+1);
		scanf("%f",&y[i]);
	}
	printf("enter the point of interpolatio:");
	scanf("%f",&X);
	for(i=0;i<n;i++)
	{
		p=0.0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			p=p*(X-x[j])/(x[i]-x[j]);
		}
		s=s+p*y[i];
	}
	printf("the value of intepolation is:");
	printf("at %f is :%0.3f",x,s);
	return 0;
}
