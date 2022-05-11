/**
 * @file atm_machine.c
 * @author Leander Paul F (leanderpaul97@outlook.com)
 * @date 2022-05-04
 * @link https://www.codechef.com/problems/ATM2
 */

#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  for (int iteration = 0; iteration < t; iteration++)
  {
    unsigned int n, a, k;
    scanf("%d %d", &n, &k);
    for (int person = 0; person < n; person++)
    {
      scanf("%d", &a);
      int temp = k - a;
      if (temp >= 0)
      {
        k = temp;
        printf("1");
      }
      else
      {
        printf("0");
      }
    }
    printf("\n");
  }
}