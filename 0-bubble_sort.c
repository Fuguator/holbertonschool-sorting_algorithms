#include "sort.h"
/**
 * bubble_sort - func
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (!array || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				tmp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = tmp;
				print_array(array, size);
			}
		}
	}
}
