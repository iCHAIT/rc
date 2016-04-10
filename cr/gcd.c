# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int a,b;

	printf("\nEnter a:");
	scanf("%d",&a);
	printf("\nEnter b:");
	scanf("%d",&b);

	printf("\nGCD of %d and %d is:",a,b);

	while(a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}

	printf("\n%d",a);
	return 0;


}