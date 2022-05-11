/**
 * @file merge_array.c
 * @author Leander Paul F (leanderpaul97@outlook.com)
 * @date 2022-05-10
 * @brief Merge two sorted array in such a way that the merged array is sorted in ascending order in even index and descending order in odd index
 * @example
 *  Input:
 *    5 - 1 5 10 20 40
 *    5 - 6 7 20 80 100
 *  Output:
 *    1 100 5 80 6 40 7 20 10 20
 */

#include <stdio.h>

#define MAX_ARRAY_SIZE 200

int main()
{
  int arr1_length, arr2_length, arr1[MAX_ARRAY_SIZE], arr2[MAX_ARRAY_SIZE], result_arr[MAX_ARRAY_SIZE * 2];
  int arr1_pointer = 0, arr2_pointer = 0, mid;
  scanf("%d", &arr1_length);
  for (int i = 0; i < arr1_length; i++)
  {
    scanf("%d", &arr1[i]);
  }
  scanf("%d", &arr2_length);
  for (int i = 0; i < arr2_length; i++)
  {
    scanf("%d", &arr2[i]);
  }
  mid = (arr1_length + arr2_length) / 2;
#ifdef DEBUG
  printf("Mid: %d, Total Length: %d\n", mid, (arr1_length + arr2_length));
#endif
  for (int i = 0; i < (arr1_length + arr2_length); i++)
  {
#ifdef DEBUG
    printf("arr1[%d] = %d, arr2[%d] = %d, ", arr1_pointer, arr1[arr1_pointer], arr2_pointer, arr2[arr2_pointer]);
#endif
    int result_index = i < mid ? (i * 2) : ((arr1_length + arr2_length) - ((i - mid) * 2) - 1);
    int value;
    if (arr1_pointer < arr1_length && arr2_pointer < arr2_length)
    {

      value = arr1[arr1_pointer] > arr2[arr2_pointer] ? arr2[arr2_pointer++] : arr1[arr1_pointer++];
    }
    else
    {
      value = arr1_pointer < arr1_length ? arr1[arr1_pointer++] : arr2[arr2_pointer++];
    }
    result_arr[result_index] = value;
#ifdef DEBUG
    printf("result[%d] = %d\n", result_index, value);
#endif
  }
  for (int index = 0; index < (arr1_length + arr2_length); index++)
  {
    printf("%d ", result_arr[index]);
  }
}