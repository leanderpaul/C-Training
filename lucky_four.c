/**
 * @file lucky_four.c
 * @author Leander Paul F (leanderpaul97@outlook.com)
 * @date 2022-05-04
 * @link https://www.codechef.com/problems/LUCKYFR
 */

#include <stdio.h>

#define STRING_MAX 10

unsigned int count_occurences(char str[])
{
  unsigned int count = 0;
  for (int index = 0; str[index] != '\0'; index++)
  {
    if (str[index] == '4')
    {
      count++;
    }
  }
  return count;
}

int main()
{
  unsigned int t = 0;
  scanf("%u", &t);
  for (unsigned int index = 0; index < t; index++)
  {
    char str[STRING_MAX];
    scanf("%s", str);
    int occurences = count_occurences(str);
    printf("%d\n", occurences);
  }
}