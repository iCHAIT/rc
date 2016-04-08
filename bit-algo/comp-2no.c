# include <stdio.h>

int max(int a, int b)
{

	int c = a-b;
	int k = c>>31 & 0x1;
	int max = a-k*c;
	return max;


}

int main()
{
	int a=10, b=5;
	printf("Maximum is:%d", max(a, b));
	return 0;
}