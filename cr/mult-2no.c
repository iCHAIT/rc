# include <stdio.h>
# include <stdlib.h>

int multiply(int x, int y)
{
	if (y==0)
		return 0;

	if(y>0)
		return x + multiply(x,y-1);

	if (y<0)
		return -multiply(x,-y);


}

int main(void)
{
	int a,b;
	printf("\nEnter a:");
	scanf("%d",&a);
	printf("\nEnter b:");
	scanf("%d",&b);

	printf("\n%dX%d:%d",a,b,multiply(a,b));
	return 0;

}