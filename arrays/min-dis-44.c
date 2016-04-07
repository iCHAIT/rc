#include <stdio.h>
#include <limits.h>

int minDist(int arr[], int n, int x, int y)
{
	int prev;
	int i=0;
	int min_dis = INT_MAX;

	for(i=0;i<n;i++)
	{
		if(x == arr[i] || y == arr[i])
		{
			prev = i;
			break;

		}

	}

	for (i=prev;i<n;i++)
	{
		if(arr[i] == x || arr[i] == y)
		{
			if(arr[prev] != arr[i] && (i-prev)<min_dis)
			{
				min_dis = i-prev;
				prev = i;

			}

			else
				prev = i;
		}
	}

	return min_dis;

}

int main()
{
    int arr[] ={3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int y = 6;

    printf("Minimum distance between %d and %d is %d\n", x, y,
              minDist(arr, n, x, y));
    return 0;
}

/*
Find the minimum distance between two numbers
Given an unsorted array arr[] and two numbers x and y, find the minimum distance between x and y in arr[]. The array might also contain duplicates. You may assume that both x and y are different and present in arr[].
*/