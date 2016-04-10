# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int main()
{
	int arr[] = {1,2,0,10,11,44},i;
	int largest,sec_largest;
	int size = sizeof(arr)/sizeof(arr[0]);

	if(arr[0]>arr[1])
	{
		largest = arr[0];
		sec_largest = arr[1];
	}
	else
	{
		largest = arr[1];
		sec_largest = arr[0];
	}

	for(i=2;i<size;i++)
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

	printf("\nlargest is %d and seond largest is %d",largest,sec_largest);
}