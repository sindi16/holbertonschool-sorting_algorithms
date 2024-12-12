#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order
* @array: array of integers to sort
* @size: holds the value of the size of array
*/

void selection_sort(int *array, size_t size)
{
	int i;
	int j;
	int tmp;
	int min_value;
	int min_value_idx;

	for (i = 0; i < (int)size - 1; i++)
	{
		min_value = array[i];

		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < min_value)
			{
				min_value = array[j];
				min_value_idx = j;
			}
		}
		if (min_value < array[i])
		{
			tmp = array[i];
			array[i] = min_value;
			array[min_value_idx] = tmp;
			print_array(array, size);
		}
	}
}
