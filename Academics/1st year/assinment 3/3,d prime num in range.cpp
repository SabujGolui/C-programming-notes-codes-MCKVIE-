  #include<stdio.h>
 int main()
 {
   int i, prime ,upper, lower, n;

   printf(" ENTER THE LOWER LIMIT : ");

   scanf("%d", &lower);

   printf("\n ENTER THE UPPER LIMIT : ");

   scanf("%d", &upper);
   printf("\n PRIME NUMBERS LIST IS : ");
   for(n=lower+1; n<upper; n++)
   {
     prime = 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
         prime = 0;
         break;
       }
     if(prime)
       printf("\t%d", n);
   }
 }

