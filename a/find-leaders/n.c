#include <stdio.h>

int main()
{
	int max;

    int arr[] = {16, 17, 4, 3, 5, 2};
    max = arr[5];
    printf("Leaders:%d",max);

    for(int i=4;i>=0;i--)
    {
		if (max <= arr[i])
		{
			max = arr[i];
			printf("Leaders:%d",max);

		}
    }

return 0;

}


/*

Method 2 (Scan from right)
Scan all the elements from right to left in array and keep track of maximum till now. When maximum changes it’s value, print it.


Time Complexity: O(n)
Please write comments if you find anything incorrect, or you want to share more information about the topic
discussed above.
*/