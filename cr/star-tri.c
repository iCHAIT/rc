#include<stdio.h>
int main()
{
    int rows,i,j,space;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(space=0;space<rows-i;++space)
           printf("  ");

        for(j=i;j<=2*i-1;++j)
          printf("* ");

        for(j=0;j<i-1;++j)
            printf("* ");

        printf("\n");
    }
    return 0;
}