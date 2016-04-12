# include <stdio.h>
# include <stdlib.h>

void swap(int *a, int *b);

void rearrange(int arr[], int n)
{
	int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // for(int k=0;k<n;k++)
    //   printf("%d", arr[k]);


    int pos = i+1, neg=0;

    while (pos < n && neg < pos && arr[neg] == 0)
       {
           swap(&arr[neg], &arr[pos]);
           pos++;
           neg += 2;
       }

    for(int k=0;k<n;k++)
    	printf("%d", arr[k]);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main()
{
	int arr[] = {0, 1, 0, 1, 1, 1, 0, 1, 1};
	// output = { 4   -3    5   -1    6   -7    2    8    9}
	int n = sizeof(arr)/sizeof(arr[0]);
	rearrange(arr, n);
	// printArray(arr, n);
	return 0;
}