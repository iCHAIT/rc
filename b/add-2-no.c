# include <stdio.h>

int Add(int x, int y)
{
    // Iterate till there is no carry
    while (y != 0)
    {
        // carry now contains common set bits of x and y
        int carry = x & y;
        printf("\nCarry:%d", carry);


        // Sum of bits of x and y where at least one of the bits is not set
        x = x ^ y;
        printf("\nx:%d", x);

        // Carry is shifted by one so that adding it to x gives the required sum
        y = carry << 1;
        printf("\ny:%d", y);
    }
    return x;
}

int main()
{
    printf("\n%d", Add(2, 2));
    return 0;
}