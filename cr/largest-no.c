# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int main()
{
	int arr[] = {4,2,6,10,11,44},i,max=INT_MIN;
	int size = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}

	printf("\nMaximum no is:%d",max);
}