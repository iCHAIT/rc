# include <stdio.h>
# include <stdlib.h>

int main(void)
{

	int a=5,b=7,c;

	c = a-b;
	printf("\nc is %d",c);
	c = c>>31 & 0x1;
	printf("\nc after making shift is %d",c);

	if(c)
		printf("%d is greater",b);
	else
		printf("%d is greater",a);

}

