#include <stdio.h>
#include <stdlib.h>

int compare (const void *a, const void * b)
{  return ( *(int *)a - *(int *)b ); }

int find4Numbers(int arr[], int n , int x)
{
	int i,j,l,r;
	qsort (arr, n, sizeof(arr[0]), compare);

	for(i=0;i<n-3;i++)
	{
		for(j=i+1;j<n-2;j++)
		{
			l=j+1;
			r=n-1;

			while(l<r)
			{
				if((arr[i] + arr[j] + arr[l] + arr[r]) == x)
				{
					printf("%d,%d,%d,%d",arr[i],arr[j],arr[l],arr[r]);
					return true;
				}

				else if ((arr[i] + arr[j] + arr[l] + arr[r]) < x)
					l++;

				else
					r--;

			}

		}
	}
}


int main()
{
    int A[] = {1, 4, 45, 6, 10, 12};
    int X = 21;
    int n = sizeof(A)/sizeof(A[0]);
    find4Numbers(A, n, X);
    return 0;
}