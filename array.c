#include <stdio.h>
 
int main()
{
   int array[100], p, i, n, num;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++)
     scanf("%d", &array[i]);
   printf("Enter the position to enter the element\n");
   scanf("%d", &p);
   printf("Enter the number to insert\n");
   scanf("%d", &num);
   for (i = n - 1; i >= p - 1; i--)
      array[i+1] = array[i];
   array[p-1] = num;
   printf("Final array is\n");
   for (i = 0; i <=n; i++)
      printf("%d\n", array[i]);
  return 0;
}
