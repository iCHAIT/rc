#include <stdio.h>
#define CHAR_BIT 8

unsigned int getAbs(int n)
{
  int const mask = n >> (sizeof(int) * CHAR_BIT - 1);
  return ((n + mask) ^ mask);
}

int main()
{
  int n = -6;
  printf("Absoute value of %d is %u", n, getAbs(n));

  getchar();
  return 0;
}