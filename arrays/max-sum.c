#include <stdio.h>

int findMaxSum(int a[], int n)
{

	int incl = a[0];
	int excl = 0;
	int new_excl;

	for(int i=1;i<n;i++)
	{
		new_excl = (incl > excl)?incl:excl;

		incl = excl + a[i];

		excl = new_excl;
	}

	return ((incl>excl)?incl:excl);

}


int main()
{
  int arr[] = {5, 5, 10, 100, 10, 5};
  printf("%d",findMaxSum(arr,6));
  return 0;
}

/*
Maximum sum such that no two elements are adjacent


Question: Given an array of positive numbers, find the maximum sum of a subsequence with the constraint that no 2 numbers in the sequence should be adjacent in the array. So 3 2 7 10 should return 13 (sum of 3 and 10) or 3 2 5 10 7 should return 15 (sum of 3, 5 and 7).Answer the question in most efficient way.

Time Complexity: O(n)