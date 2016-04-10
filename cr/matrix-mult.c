#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a[3][3] = {1,1,2,2,3,1,1,2,1},b[3][3]={2,1,2,3,1,2,4,1,2},c[3][3];
	int i,j,k,sum=0;

	int n = sizeof(a)/sizeof(a[0]);
	printf("\n%d\n",n);


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum +=a[i][k]*b[k][j];

			}
			c[i][j] = sum;
			sum=0;
		}

	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

return 0;
}