#include<stdio.h>
int main(){
  int n;
  int arr[100];
  printf("Enter the number of elements to the array");
  scanf("%d",&n);
  int i;
  int x = n+1;
  printf("Enter the elements to the array");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);  
  int sum = 0;
  sum = x*(x+1)/2;
  int sum1 = 0;  
  for(i = 0; i<n; i++){
    sum1 = sum1 + arr[i]; 
} 
  printf("missing number = %d", sum - sum1);
  return 0;
}
