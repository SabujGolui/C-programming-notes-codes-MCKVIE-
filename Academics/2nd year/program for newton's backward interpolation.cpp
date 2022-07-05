/*program for newton's backward interpolation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x[20],y[20][20],s,t=1.0,X,h,u;
	int i,j,n,flag=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter x%d:",i+1);
		scanf("%f",&x[i]);
		printf("enter y%d:",i+1);
		scanf("%f",&y[i][0]);
	}
	h=x[1]-x[0];
	for(i=1;i<n-1;i++)
	{
		if((x[i+1]-x[i])!=h)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("newton's backward interpolation formula is applicable\n");
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
		for(j=0;j<=1;j++)
		printf("%7.3f",y[i][j]);
		printf("\n");
	 }
	 u=(X-x[n-1])/h;
	 s=y[n-1][0];
	 for(i=1;i<n;i++)
	 {
		t=t*(u+i-1)/i;
		s=s+t*y[n-1][i];
	 }
	 printf("\nvalue of the function:");
	 printf("at x=%f is %0.3f",X,s);
    }
    else
    printf("newton's backward interpolation is not applicable");
    return 0;
}
