#include "sort.h"
/**
 * selection_sort - func
 * @array: var
 * @size: var
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0;
	int tmp = 0;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (*(array + j) < *(array + min))
				min = j;
		if (min != i)
		{
			tmp = *(array + min);
			*(array + min) = *(array + i);
			*(array + i) = tmp;
			print_array(array, size);
		}
	}
}
