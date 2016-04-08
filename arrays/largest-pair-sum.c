# include <stdio.h>

void findLargetsSum(int arr[], int n)
{
	int largest;
	int sec_largest;
	int i;

	if (arr[0]>arr[1])
	{
		largest = arr[0];
		sec_largest = arr[1];
	}

	else
	{
		largest = arr[1];
		sec_largest = arr[0];

	}

	for(i=2;i<n;i++)
	{
		if(arr[i]>largest)
		{
			sec_largest = largest;
			largest = arr[i];
		}

		else if(arr[i]>sec_largest)
		{
			sec_largest = arr[i];
		}


	}


	printf("Pair with largest sum is %d and %d", largest, sec_largest);


}

int main()
{

	 int arr[] = {12, 34, 10, 6, 40};
	 int n = sizeof(arr)/sizeof(arr[0]);
	 findLargetsSum(arr, n);
	return 0;
}