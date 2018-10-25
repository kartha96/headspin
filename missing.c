#include<stdio.h>
int main()
{
  int n,k;
  int arr[100];
  printf("Enter the number of elements to the array");
  scanf("%d",&n);
  int i;
  int x = n+1;
  printf("Enter the elements to the array without repeating from 1");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);  
  int sum = 0;
  sum = x*(x+1)/2;
  int sum1 = 0;  
  for(i = 0; i<n; i++)
    sum1 = sum1 + arr[i]; 
  k=sum-sum1;
  printf("missing number = %d", k);
  return 0;
}
