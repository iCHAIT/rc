# include <stdio.h>
#define CHAR_BIT 8

int max(int a, int b)
{

	int c = a-b;
	int k = c>>(sizeof(int)*CHAR_BIT-1) & 0x1;
	int max = a-k*c;
	return max;


}

int main()
{
	int a=10, b=5, c=15;
	printf("Max is: %d",max(a, max(b,c)));
	return 0;
}