# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int main()
{
	int arr[] = {4,2,6,10,11,3},i,min=INT_MAX;
	int size = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<size;i++)
	{
		if(arr[i]<min)
			min = arr[i];
	}

	printf("\nMinimun no is:%d",min);
}