#include <stdio.h>
int main()

{

    int i,j,k, MAX;

 

    for(i=1; i<=MAX; i++){

 

        for(j=1; j<=MAX-i; j++){

 

            printf(" ");

        }

 

        for(k=1; k<=i; k++){

 

            printf("*");

 

        }

        printf("\n");

    }

    printf("\n");

    return 0;

}
