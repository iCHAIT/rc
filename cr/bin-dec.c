# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
# define max 10

int main()
{
	char bin[max];
	int len=0,dec=0,i=0,val=0;

	printf("\nEnter binary number:");
	gets(bin);

	len = strlen(bin);

	for(i=0;bin[i]!='\0';i++)
	{
		if(bin[i] == '1')
		{
			dec += pow(2, (len-i-1));
			len--;
		}
	}


printf("\nDecimal number is:%d",dec);

}

