# include <stdio.h>
# include <stdlib.h>

int main()
{
	int bin;
	int dec=0,j=1,rem=0;

	printf("\nEnter binary number:");
	scanf("%d",&bin);


	while(bin != 0)
	{
		rem = bin%10;
		dec += rem*j;
		j=j*2;
		bin/=10;
	}


printf("\nDecimal number is:%d",dec);

}

