# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int arr[] = {5,1,3,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i,j,temp=0,min=0;

//bubble sort
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

//selection sort

	// for(i=0;i<n-1;i++)
	// {
	// 	min = arr[i];

	// 	for(j=i+1;j<n;j++)
	// 	{
	// 		if(min>arr[j])
	// 		{
	// 			temp = arr[j];
	// 			arr[j] = min;
	// 			min = temp;
	// 		}
	// 	}
	// }
	// 	printf("%d ",min);

	return 0;


}