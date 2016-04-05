# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>


bool isMajority(int a[], int size, int cand);

int findCand(int a[], int size);

void printMajority(int a[], int size)
{

	int cand = findCand(a, size);

	if(isMajority(a, size, cand))
		printf("%d", cand);
	else
		printf("No majority element");


}

int findCand(int a[], int size)
{

	int maj_index = 0, count=1,i=0;

	for(i=1;i<size;i++)
	{
		if (a[i] == a[maj_index])
			count++;
		else
			count--;

		if (count==0)
		{
			maj_index = i;
			count=1;
		}

	}

	return a[maj_index];

}

bool isMajority(int a[], int size, int cand)
{
	int i, count=0;
	for(i=0;i<size;i++)
	{
		if(a[i] == cand)
			count++;
	}

	if (count>size/2)
		return 1;
	else
		return 0;

}

int main()
{

int a[] = {1, 3, 3, 3, 2};
int size = (sizeof(a))/(sizeof(a[0]));
printMajority(a, size);
return 0;


}