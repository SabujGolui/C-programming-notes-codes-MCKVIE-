#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float y(float x)
{
    return (x*exp(x)); //function of which integration is to be calculated
}
int main()
{
    float a,b,h,sum;
    int i,n,m;
 
    printf("Enter a=(lower limit), b=(upper limit), number of subintervals:\n");
    scanf("%f%f%d",&a,&b,&n);
    h = (b-a)/n;
    sum=0;
 
        if(n%6==0)
		{
			a=a+6*h;
            sum=sum+((3*h/10)*(y(a)+y(a+2*h)+5*y(a+h)+6*y(a+3*h)+y(a+4*h)+5*y(a+5*h)+y(a+6*h)));
            printf("Value of integral is %f\n", sum);
        }
        else{
            printf("Sorry ! Weddle rule is not applicable");
        }
    }
