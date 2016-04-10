# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool printPairs(int arr[],int size, int sum)
{
	int i,j,temp=0,l,r, count=0;

	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}

	}

	l=0;
	r=size-1;

	while(l<r)
	{
		if(arr[l] + arr[r] == sum)
		{
			printf("\n%d and %d",arr[l],arr[r]);
			return 1;
		}
		else if(arr[l] + arr[r] < sum)
			l++;
		else
			r--;
	}

	return 0;
}

int main(void)
{
    int A[] = {8, 7, 45, 5, 10, 1};
    int n = 15;
    int arr_size = sizeof(A)/sizeof(A[0]);

    if (printPairs(A, arr_size, n))
	    printf("\nPair found");
	 else
	 	printf("\nNo pair exists");

    return 0;
}