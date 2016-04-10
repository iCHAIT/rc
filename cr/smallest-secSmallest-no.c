# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int main()
{
	int arr[] = {1,2,0,10,11,3},i;
	int smallest,sec_smallest;
	int size = sizeof(arr)/sizeof(arr[0]);

	if(arr[0]>arr[1])
	{
		smallest = arr[1];
		sec_smallest = arr[0];
	}
	else
	{
		smallest = arr[0];
		sec_smallest = arr[1];
	}

	for(i=2;i<size;i++)
	{
		if(arr[i]<smallest)
		{
			sec_smallest = smallest;
			smallest = arr[i];
		}

		else if(arr[i]<sec_smallest)
		{
			sec_smallest = arr[i];
		}
	}

	printf("\nSmallest is %d and seond smallest is %d",smallest,sec_smallest);
}