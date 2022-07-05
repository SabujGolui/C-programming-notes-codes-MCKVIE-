#include <stdio.h>

int main()
{
  int arr[10], n,i,j,k,temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter arr[%d] element: ",i);
    scanf("%d",&arr[i]);
  }

  for (j = 0 ; j< n - 1; j++)
  {
    for (k= 0 ; k < n - j- 1; k++)
    {
      if (arr[k] > arr[k+1])
      {
        temp = arr[k];
        arr[k] = arr[k+1];
        arr[k+1] = temp;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     printf("%d\n", arr[i]);
 }
