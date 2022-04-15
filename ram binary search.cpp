// Problem : Binary Search.
// Name : Ram Patidar.
// Enrollment NO. = 0827CS201196.

#include <iostream>
using namespace std;
int binarySearch(int array[], int x, int top, int bottom)
{
   while(top<=bottom)
   {
   	  int mid = (top + bottom)/2;
   	  
   	  if(x == array[mid])
   	  {
   	  	return mid;
	  }
	  if(x>array[mid])
	  {
	  	top = mid +1;
	  }
	  if(x<array[mid])
	  {
	  	bottom = mid - 1;
	  }
	  
	 
   }
    
   
}
int main(void)
{
    int array[] = {33, 56, 35, 88, 2, 98, 23};
    int x = 88;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}

// Complixity = O(log n).
