# include <stdio.h>
# include <stdlib.h>

int main()
{

	int arr[] = {1,2,3,4,5,6,7,8,9},arr_sum=0,whole_sum=0,missing_elem=0;
	int n=10,i;
	int size = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<size;i++)
		arr_sum +=arr[i];

	whole_sum = n*(n+1)/2;

	missing_elem = whole_sum - arr_sum;

	printf("\nMissing element is:%d\n",missing_elem);
	return 0;
}