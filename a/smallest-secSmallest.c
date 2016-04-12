#include <stdio.h>
#include <limits.h>

int main()
{

    int arr[] = {12, 13, 1, 10, 34, 1};

    int min = INT_MAX;
    int sec_min = INT_MAX;

    for(int i=0;i<6;i++)
    {
    	if (arr[i]<min)
    	{
    		sec_min = min;
    		min = arr[i];
    	}

    	else if (arr[i]>min && arr[i]<sec_min)
    	{

    		sec_min = arr[i];

    	}
    }

    printf("MIN - %d, Second-MIN - %d", min, sec_min);

}