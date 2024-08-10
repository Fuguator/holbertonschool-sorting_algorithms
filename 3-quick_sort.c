#include "sort.h"

void recursion(int *array, size_t size, int left, int right);
int separation(int *array, size_t size, int left, int right);

void quick_sort(int *array, size_t size)
{
  if (!array || size < 2)
    return;
  recursion(array, size, 0, size - 1);
}

int separation(int *array, size_t size, int left, int right)
{
  int i = left, j = left - 1;
  int pivot = *(array + right), tmp;

  for (; i < right; i++)
  {
    if (*(array + i) < pivot)
    {
      j++;
      if (j != i)
      {
        tmp = *(array + i);
        *(array + i) = *(array + j);
        *(array + j) = tmp;
        print_array(array, size);
      }
    }
  }
  if (j + 1 != right)
  {
    tmp = *(array + right);
    *(array + right) = *(array + j + 1);
    *(array + j + 1) = tmp;
    print_array(array, size);
  }
  return (j + 1);
}

void recursion(int *array, size_t size, int left, int right)
{
  int pivot = 0;

  if (left < right)
  {
    pivot = separation(array, size, left, right);
    recursion(array, size, left, pivot - 1);
    recursion(array, size, pivot + 1, right);
  }
}

