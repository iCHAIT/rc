# include <stdio.h>
# include <stdlib.h>

float squareRoot(int n)
{
	float x = n;
	float y = 1;
	float e = 0.000001;

	while(x-y>e)
	{
		x = (x+y)/2;
		y=n/x;
	}

	return x;

}


int main(void)
{

	int n;

	printf("\nEnter number:");
	scanf("%d",&n);
	printf("\nSquare of %d is:%f",n,squareRoot(n));
	return 0;

}