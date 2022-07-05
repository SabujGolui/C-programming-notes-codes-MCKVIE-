/*gauss elemination method*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float **a,*x,r;
	int n,i,j,k;
	printf("Enter the order of matrix:\n");
	scanf("%d",&n);
	x=(float *)malloc(n*sizeof(float));
	a=(float**)malloc(n*sizeof(float *));
	for(i=0;i<n;i++)
    a[i]=(float *)malloc(n*sizeof(float));
	printf("Enter augmented matrix:\n");
	for(i=0;i<n;i++)
    	for(j=0;j<n+1;j++)
          scanf("%f",&a[i][j]);
    /* elementary transformation */
	for(k=0;k<n-1;k++)
	{
	    for(i=k+1;i<n;i++)
		{
			r=a[i][k]/a[k][k];
			for(j=0;j<n+1;j++)
			 a[i][j]=a[i][j]-r*a[k][j];
		}
	}	
	/*printing the transformed Augmented matrix */    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n+1;j++)
         	printf("%7.3f",&a[i][j]);
    	printf("\n");
	}
	/*back substitution*/
	for(i=n-1;i>=0;i--)
    {
    	x[i]=a[i][n];
    	for(j=i+1;j<n;j++)
    	    x[i]=x[i]-a[i][j]*x[j];
    	x[i]=x[i]/a[i][i];
	}
	/*printing of solution*/
	printf("the solutions are:\n");
	for(i=0;i<n;i++)
	printf("x%d=%0.4f\n",i+1,x[i]);
	return 0;
}
