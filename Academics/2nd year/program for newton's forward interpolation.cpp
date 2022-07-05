/*program for newton's forward interpolation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x[20],y[20][20],s,t=1.0,X,h,u;
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter x%d:",i+1);
		scanf("%f",&x[i]);
		printf("enter y%d:",i+1);
		scanf("%f",&y[i][0]);
	}
		printf("enter the point of interpolation:");
		scanf("%f",&X);
		for(j=1;j<n;j++)
		{
			for(i=j;i<n;i++)
			y[i][j]=y[i][j-1]-y[i-1][j-1];
		} 
	 printf("difference table\n\n");
	 for(i=0;i<n;i++)
	 {
		for(j=0;j<=i;j++)
		printf("%7.3f",y[i][j]);
		printf("\n");
	 }
	 h=x[1]-x[0];
	 u=(X-x[0])/h;
	 s=y[0][0];
	 for(i=1;i<n;i++)
	 {
		t=t*(u-i+1)/i;
		s=s+t*y[i][i];
	 }
	 printf("\nvalue of the function:");
	 printf("at x=%f is %0.3f",X,s);
    return 0;
}
