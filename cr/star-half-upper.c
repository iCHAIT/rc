/*
*
* *
* * *
* * * *
* * * * *
*/


# include <stdio.h>

int main()
{
	int row=5,i,j;

	for(i=1;i<=row;i++)
	{

		for(j=1;j<=i;j++)
			printf("* ");

		printf("\n");
	}

	return 0;


}