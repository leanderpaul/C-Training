/**
 * @file water_requirement.c
 * @author Leander Paul F
 * @date 2022-05-05
 * @link https://www.codechef.com/problems/WATERREQ
 */

#include <stdio.h>

int water_requirement(int num)
{
  return num * 2;
}

int main()
{
  int n;
  scanf("%d", &n);
  for (int index = 0; index < n; index++)
  {
    int a;
    scanf("%d", &a);
    int result = water_requirement(a);
    printf("%d\n", result);
  }
  return 0;
}
