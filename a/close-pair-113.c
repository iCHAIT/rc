# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

void printClosest(int a1[], int a2[], int m, int n , int x)
{

	int res_l;
	int res_r;
	int diff = INT_MAX;

	int l=0, r=n-1;

	while(l<m && r>=0)
	{
		if(abs(a1[l] + a2[r] - x) < diff)
		{
				res_l = l;
				res_r = r;
				diff = abs(a1[l] + a2[r] - x);
		}

		if (a1[l] + a2[r]<x)
			l++;
		else
			r--;

	}


	printf("closest pair is:%d and %d",a1[res_l],a2[res_r]);

}

int main()
{

	int ar1[] = {1, 4, 5, 7};
	int ar2[] = {10, 20, 30, 40};
	int m = sizeof(ar1)/sizeof(ar1[0]);
	int n = sizeof(ar2)/sizeof(ar2[0]);
	int x = 38;
	printClosest(ar1, ar2, m, n, x);
	return 0;
}
