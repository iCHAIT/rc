#include<stdio.h>

int addOne(int x)
{
  int m = 1;

  /* Flip all the set bits until we find a 0 */
  while( x & m )
  {
    x = x^m;
    printf("\nx:%d",x);
    m <<= 1;
    printf("\nm:%d",m);
  }

  /* flip the rightmost 0 bit */
  x = x^m;
  printf("\nx after loop:%d",x);
  return x;
}

int main()
{
  printf("\nanswer:%d", addOne(13));
  getchar();
  return 0;
}