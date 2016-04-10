#include <stdio.h>

int main()
{
    int i, n, count = 0, value = 2, flag = 1, total = 0;

    printf("Enter the value for n:");
    scanf("%d", &n);

    while (count < n)
    {
        for (i = 2; i <= value - 1; i++)
        {
            if (value % i == 0)
            {
                    flag = 0;
                    break;
            }
        }

        if (flag)
        {
                total = total + value;
                count++;
        }

        value++;
        flag = 1;
    }

    printf("Sum of first %d prime numbers is %d\n", n, total);
    return 0;
}
