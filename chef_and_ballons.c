/**
 * @link https://www.codechef.com/problems/CHBLLNS
 */

#include <stdio.h>

int main()
{
  unsigned int t;
  scanf("%d", &t);
  for (int iteration = 0; iteration < t; iteration++)
  {
    long int r, g, b, k;
    scanf("%ld %ld %ld", &r, &g, &b);
    scanf("%ld", &k);
    long int count = ((k - 1) * 3) + 1;
#ifdef DEBUG
    printf("Iteration %d: Count - %d, {R, G, B, K} = { %d, %d, %d, %d }", iteration, count, r, g, b, k);
#endif
    long int cr = r - k + 1;
    long int cg = g - k + 1;
    long int cb = b - k + 1;
    if (cr < 0)
    {
      count += cr;
    }
    if (cb < 0)
    {
      count += cb;
    }
    if (cg < 0)
    {
      count += cg;
    }
    printf("%ld\n", count);
  }
}