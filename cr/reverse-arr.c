# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int a[] = {3,4,7,8,1,4,2,9};
	int n = sizeof(a)/sizeof(a[0]);
	int i,l=0,r=n-1,temp=0;

	while(l<r)
	{
			temp = a[l];
			a[l] = a[r];
			a[r] = temp;
			l++;
			r--;
	}

	printf("\nReversed array: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	return 0;


}