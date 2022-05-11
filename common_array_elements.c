/**
 * @file common_array_elements.c
 * @author Leander Paul F (leanderpaul97@outlook.com)
 * @date 2022-05-10
 * @brief Find the common elements in 3 sorted array elements
 * @example
 *  Input:
 *    6 - 1 5 10 20 40 80
 *    5 - 6 7 20 80 100
 *    8 - 3 4 15 20 30 70 80 120
 *  Output:
 *    20 80
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr1_length, arr2_length, arr3_length;
  /** Getting first array input */
  scanf("%d", &arr1_length);
  int *arr1 = (int *)malloc(arr1_length * sizeof(int));
  for (int i = 0; i < arr1_length; i++)
  {
    scanf("%d", arr1 + i);
  }

  /** Getting second array input */
  scanf("%d", &arr2_length);
  int *arr2 = (int *)malloc(arr2_length * sizeof(int));
  for (int i = 0; i < arr2_length; i++)
  {
    scanf("%d", arr2 + i);
  }

  /** Getting third array input */
  scanf("%d", &arr3_length);
  int *arr3 = (int *)malloc(arr3_length * sizeof(int));
  for (int i = 0; i < arr3_length; i++)
  {
    scanf("%d", arr3 + i);
  }

  int arr1_pointer = 0, arr2_pointer = 0, arr3_pointer = 0;
  while (arr1_pointer < arr1_length - 1 || arr2_pointer < arr2_length - 1 || arr3_pointer < arr3_length - 1)
  {
    int a = arr1[arr1_pointer], b = arr2[arr2_pointer], c = arr3[arr3_pointer];
#ifdef DEBUG
    printf("arr1[%d] = %d, arr2[%d] = %d, arr3[%d] = %d\n", arr1_pointer, a, arr2_pointer, b, arr3_pointer, c);
#endif
    if (a == b && a == c)
    {
      printf("%d ", a);
      if (arr1_pointer < arr1_length - 1)
      {

        arr1_pointer++;
      }
      if (arr2_pointer < arr2_length - 1)
      {

        arr2_pointer++;
      }
      if (arr3_pointer < arr3_length - 1)
      {

        arr3_pointer++;
      }
      continue;
    }
    if (a < b && a < c && arr1_pointer < arr1_length - 1)
    {
      arr1_pointer++;
    }
    else if (b < c && arr2_pointer < arr2_length - 1)
    {
      arr2_pointer++;
    }
    else
    {
      arr3_pointer++;
    }
  }
}