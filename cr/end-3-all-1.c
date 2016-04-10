# include <stdio.h>

int main(void)
{

	int n,i, m = 1;
	printf("\nEnter number ending with 3:");
	scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        if (m == 0)
    		printf("\nNumber of 1's:%d",i);
        m = (10*m + 1) % n;
    }
}