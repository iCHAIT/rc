# include <stdio.h>
# include <stdlib.h>
# define max 10


int main(void)
{

	int dec,bin,n;
	int arr[max],top=-1,i=0,rem=0,j;

	printf("\nEnter decimal number:");
	scanf("%d",&dec);

	while(dec != 0)
	{
		arr[i] = dec%2;
		i++;
		dec = dec/2;
	}

	// if(dec != 0)
		// arr[i]=1;

	printf("\nBinary equivalent:");

	for(j=i;j>=0;j--)
		printf("%d",arr[j]);


}