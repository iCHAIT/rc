# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool isPal(int num)
{
	int dig,n,rev;
	n = num;
	rev = 0;

	while(num>0)
	{
		dig = num % 10;
		rev = rev*10 + dig;
		num = num/10;
	}

	if (n == rev)
		return 1;
	else
		return 0;

}

int main(void)
{
	int n;

	printf("\nEnter n:");
	scanf("%d",&n);
	if(isPal(n))
		printf("\n%d is palindrome.",n);
	else
		printf("\n%d is not a palindrome.",n);

}

