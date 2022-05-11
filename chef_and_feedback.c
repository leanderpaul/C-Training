/**
 * @link https://www.codechef.com/problems/LUCKYFR
 */

#include <stdio.h>

#define MAX_STRING_SIZE 100000

void feedback(char str[])
{
  for (unsigned int index = 1; str[index + 1] != '\0'; index++)
  {
    if ((str[index] == '0' && str[index - 1] == '1' && str[index + 1] == '1') || (str[index] == '1' && str[index - 1] == '0' && str[index + 1] == '0'))
    {
      printf("Good\n");
      return;
    }
  }
  printf("Bad\n");
}

int main()
{
  int t;
  char str[MAX_STRING_SIZE];
  scanf("%d", &t);
  for (int iteration = 0; iteration < t; iteration++)
  {
    scanf("%s", str);
    feedback(str);
  }
}