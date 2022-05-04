/**
 * @file who_is_taller.c
 * @author Leander Paul F
 * @date 2022-05-04
 * @link https://www.codechef.com/problems/TALLER
 */

#include <stdio.h>

int who_is_taller(int num1, int num2)
{
  if (num1 > num2)
  {
    return 1;
  }
  else
  {
    return 2;
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  for (int index = 0; index < n; index++)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = who_is_taller(a, b);
    if (result == 1)
    {
      printf("A\n");
    }
    else
    {
      printf("B\n");
    }
  }
  return 0;
}
