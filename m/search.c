# include <stdio.h>
# include <stdbool.h>

bool search(int mat[4][4], int n, int x)
{
	int i=0,j=n-1;

	while(i<n && j>=0)
	{
		if (x == mat[i][j])
		{
		       printf("\n Found at %d, %d", i, j);
		       return 1;
		 }

		if (x>mat[i][j])
			i++;
		else
			j--;

	}

	printf("Element not found");
	return 0;


}

int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  search(mat, 4, 29);
  getchar();
  return 0;
}