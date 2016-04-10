# include <stdio.h>

void fibo(int num)
{
    static int first=0, second=1, sum;

    if(num>0)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%d ",sum);
        fibo(num-1);
    }
}

int main(void)
{
    int n;
    printf("\nEnter n:");
    scanf("%d",&n);

    printf("\nFibinacci series is:");

    if (n==0)
        printf("\nEnter a no greater than 0");
    else if (n==1)
        printf("\n0 ");
    else if(n==2)
        printf("\n0 1 ");
    else
        fibo(n);


}