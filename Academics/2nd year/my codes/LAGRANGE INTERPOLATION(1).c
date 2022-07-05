/*LAGRANGE INTERPOLATION*/
#include<stdio.h>
#include<math.h>
/*Function to evaluate Li(x)*/

float Li(int i, int n, float x[n+1], float X)
{
    int j;
    float prod=1;
    for(j=0;j<=n;j++)
	{
        if(j!=i)
            prod=prod*(X-x[j])/(x[i]-x[j]);
    }
        return prod;
}
 
/*Function to evaluate Pn(x) where Pn is the Lagrange interpolating polynomial of degree n*/
 
float Pn(int n, float x[n+1], float y[n+1], float X){
    float sum=0;
    int i;
    for(i=0;i<=n;i++)
	{
        sum=sum+Li(i,n,x,X)*y[i];
    }
    return sum;
}
main()
{
    int i,n;
    printf("Enter the number of data-points:\n");
    scanf("%d",&n);
    n=n-1;
    float x[n+1];
    float y[n+1];
    printf("Enter the x data-points:\n");
    for(i=0;i<n+1;i++)
	{
        scanf("%f",&x[i]);
    }
     
    printf("Enter the y data-points:\n");
    for(i=0;i<n+1;i++)
	{
        scanf("%f ",&y[i]);
    }
     
    float X;  
    printf("Enter the value of x for which you want the interpolated value of y(x):\n");
    scanf("%f ",&X);
    printf("The interpolated value is %f ",Pn(n,x,y,X));
}
