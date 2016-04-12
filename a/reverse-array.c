# include <stdio.h>
# include <stdlib.h>


int main()
{

	int arr[] = {3,4,1,2,6,5};

	int size = (sizeof(arr))/(sizeof(arr[0]));
	int start=0, end = size-1,i,temp=0	;

	printf("Input Array is");

	for (i=0;i<size;i++)
		printf("%d ", arr[i]);

	i=0;

	while(i<size/2)
	{

		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
		i++;

	}

printf("OUTPUT Array is");
		for (int i=0;i<size;i++)
		printf("%d ", arr[i]);


}