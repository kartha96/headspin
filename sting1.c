//Write a function to find the largest and smallest number in an array without using any inbuilt functions.
#include <stdio.h>
//function to find smallest value in a array
int smallest(int arr[],int size)
{
 int min=arr[0];
 int i;
  for(i=1;i<size;i++)
   {
     if(arr[i]<min)
      {
        min=arr[i];
	}
	 
    }
   return min;
}	
//function to find largest value in a array
int largest(int arr[],int size)
 {
   int max=arr[0];
   int k;
    for(k=1;k<size;k++)
     {
       if(arr[k]>max)
        {
          max=arr[k];
        }
     }
return max;	
 }
	
//main function
	
 int main()
  {
     int arr[100],j,size,min;
     int size=5;	 
     printf("enter the number of elements\n");
     printf("enter the elements\n");
     arr[0]=1;
     arr[1]=5;
     arr[2]=12;
     arr[3]=7;
     arr[4]=10;
        printf("the largest integer in the array is %d\n",largest(arr,size));
        printf("the smallest integer in the array is %d\n",smallest(arr,size));
		
    }





