/**
 * @file string_rotation.c
 * @author Leander Paul F (leanderpaul97@outlook.com)
 * @date 2022-05-10
 * @brief Program to find whether a string is a rotation of another string or not
 * @example DEV EVD - true, DEV EDV - false
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX_STRING_SIZE 200

bool is_string_rotatable(char str1[], char str2[], int length)
{
  for (int i = 0; i < length; i++)
  {
    bool is_rotatable = true;
    for (int j = 0; j < length; j++)
    {
      int k = j + i;
      if (k >= length)
      {
        k = k % length;
      }
#ifdef DEBUG
      printf("str1[%d] = '%c', str2[%d] = '%c'\n", j, str1[j], k, str2[k]);
#endif
      if (str1[j] != str2[k])
      {
        is_rotatable = false;
        break;
      }
    }
    if (is_rotatable)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  char str1[MAX_STRING_SIZE], str2[MAX_STRING_SIZE];
  int str1_length, str2_length;
  scanf("%s%n %s%n", str1, &str1_length, str2, &str2_length);
  str2_length = str2_length - str1_length - 1;
  bool is_rotatable = false;
#ifdef DEBUG
  printf("str1_length: %d, str2_length: %d\n", str1_length, str2_length);
#endif
  if (str1_length == str2_length)
  {
    is_rotatable = is_string_rotatable(str1, str2, str1_length);
  }
  printf(is_rotatable ? "True" : "False");
  return 0;
}