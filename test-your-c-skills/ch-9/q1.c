# include <stdio.h>

int main()
{
	char a[] = "visual C++";
	char *b = "visual C++";
	printf("\n%d,%d",sizeof(a),sizeof(b));
	printf("\n%d,%d",sizeof(*a),sizeof(*b));
	return 0;
}