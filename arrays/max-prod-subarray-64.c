# include <stdio.h>
# include <stdlib.h>

int min(int x, int y)
{
	return x>y?y:x;
}


int max(int x, int y)
{
	return x>y?x:y;
}


int maxProdSubArray(int arr[], int size)
{
	int max_ending_here = 1;
	int min_ending_here = 1;
	int max_so_far = 1;
	int i;

	for(i=0;i<size;i++)
	{
		if (arr[i]>0)
		{
			max_ending_here = max_ending_here*arr[i];
			min_ending_here = min(max_ending_here*arr[i], 1);

		}

		else if(arr[i] == 0)
		{

			max_ending_here = 1;
			min_ending_here = 1;

		}

		else
		{
			int temp = max_ending_here;
			max_ending_here = max(min_ending_here*arr[i], 1);
			min_ending_here = temp*arr[i];
		}

		if(max_so_far<max_ending_here)
			max_so_far = max_ending_here;



	}

	return max_so_far;

}


int main()
{


    int arr[] = {1, -2, -3, 0, 7, -8, -2};
    int size = (sizeof(arr))/(sizeof(arr[0]));
    printf("Maximum Sub array product is %d",
              maxProdSubArray(arr, size));
    return 0;


}