# include <stdio.h>

int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while(n)
  {
    count += n & 1;
    printf("\ncount:%u",count);
    n >>= 1;
    printf("\nn:%u",n);
  }
  return count;
}


int main()
{
    int i = 9;
    printf("%d", countSetBits(i));
    getchar();
    return 0;
}