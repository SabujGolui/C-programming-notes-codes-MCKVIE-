#include <stdio.h>
int gcd(int g1, int g2);
int main() 
{
int g1, g2;
printf("Enter two positive integers:\n");
scanf("%d%d", &g1, &g2);
printf("G.C.D of %d and %d is %d.", g1, g2, gcd(g1, g2));
return 0;
}
int gcd(int g1, int g2)
 {
    if (g2 != 0)
        return gcd(g2, g1 % g2);
    else
        return g1;
}
