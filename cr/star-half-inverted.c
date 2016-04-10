/*
* * * * *
* * * *
* * *
* *
*
*/


# include <stdio.h>

int main()
{
	int row=5,i,j;

	for(i=row;i>=1;i--)
	{

		for(j=1;j<=i;j++)
			printf("* ");

		printf("\n");
	}

	return 0;


}