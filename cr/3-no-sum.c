# include <stdio.h>
#include <stdlib.h>

void find3Numbers(int arr[], int n, int sum)
{

	int i,j,l,r,temp=0;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}



	for(i=0;i<n-2;i++)
	{
		l=i+1;
		r=n-1;

		while(l<r)
		{
			if(arr[i] + arr[l] + arr[r] == sum)
			{
				printf("\nTriplet is %d %D and %d",arr[i],arr[l],arr[r]);
				break;
			}

			else if(arr[i] + arr[l] + arr[r] < sum)
				l++;
			else
				r--;


		}
	}


}

int main()
{
	int A[] = {1, 4, 45, 6, 10, 8};
	  int sum = 22;
	  int arr_size = sizeof(A)/sizeof(A[0]);

	  find3Numbers(A, arr_size, sum);
	  return 0;
}