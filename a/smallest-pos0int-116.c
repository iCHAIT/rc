#include <stdio.h>


int findSmallest(int arr[], int n)
{
   int res = 1;

   // Traverse the array and increment 'res' if arr[i] is
   // smaller than or equal to 'res'.
   for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];

   return res;
}

// Driver program to test above function
int main()
{
   int val;
   int arr1[] = {1, 3, 4, 5};
   int n1 = sizeof(arr1)/sizeof(arr1[0]);
   val = findSmallest(arr1, n1);
   printf("%d",val);

   return 0;
}