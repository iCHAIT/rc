# include <stdio.h>
# include <stdlib.h>

int findCandidate(int arr[], int n)
{
	int maj_index=0,count=1,i;

	for(i=1;i<n;i++)
	{
		if(arr[maj_index] == arr[i])
			count++;
		else
			count--;

		if(count==0)
		{
			maj_index=i;
			count=1;
		}

	}

	return arr[maj_index];

}

void printMajority(int a[], int n)
{
	int cand,count=0,i;
	cand = findCandidate(a,n);

	for(i=0;i<n;i++)
		if(a[i] == cand)
			count++;

	if (count>=n/2)
		printf("\nMajority element is:%d",cand);
	else
		printf("\nNo majority element.");


}


int main(void)
{

	    int a[] = {3,3,4,2,4,4,2,4,4};
	    // int a[] = {1, 3, 3, 1, 2};
	    int size = (sizeof(a))/sizeof(a[0]);
	    printMajority(a, size);
	    getchar();
	    return 0;
}