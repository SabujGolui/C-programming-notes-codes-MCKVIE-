#include<stdio.h>
int fact(int );
int main()
{
int n,y,sum=0,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
{
sum=sum+fact(i);
    }
printf("the sum of  factorial of the number: %d",sum);
}
int fact(int n)
{
int sum;
if(n==1)
return 1;
else
return n*fact(n-1);
}

