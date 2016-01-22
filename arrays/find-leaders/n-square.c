#include <stdio.h>

int main()
{

    int arr[] = {16, 17, 4, 3, 5, 2};

    for(int i=0;i<6;i++)
    {	int j;
    	for(j=i+1;j<6;j++)
    	{
    		if (arr[i] <= arr[j])
    			break;
    	}

    	if (j==6) //loop didn't break, so leader
    		printf("%d",arr[i]);
    }

return 0;

}


/*
Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.
Let the input array be arr[] and size of the array be size.
Method 1 (Simple)
Use two loops. The outer loop runs from 0 to size – 1 and one by one picks all elements from left to right. The inner loop compares the picked element to all the elements to its right side. If the picked element is greater than all the elements to its right side, then the picked element is the leader.


Time Complexity: O(n*n)
*/