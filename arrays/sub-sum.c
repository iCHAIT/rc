#include <stdio.h>

int subArraySum(int arr[], int n, int sum)
{

	int cur_sum = arr[0],i,start=0;

	for(i=1;i<n;i++)
	{
		while(cur_sum>sum && start<i-1)
		{
			cur_sum = cur_sum - arr[start];
			start++;

		}

		if(cur_sum == sum)
		{
			printf("Sum found between indexes %d and %d", start, i-1);
			return 1;
		}

		if (i < n)
			cur_sum = cur_sum + arr[i];
	}

	printf("No such subarray");
	return 0;
}


int main()
{
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}


/*
Find subarray with given sum
Given an unsorted array of nonnegative integers, find a continous subarray which adds to a given number. Examples:
Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Ouptut: Sum found between indexes 2 and 4
Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Ouptut: Sum found between indexes 1 and 4
Input: arr[] = {1, 4}, sum = 0
Output: No subarray found
*/