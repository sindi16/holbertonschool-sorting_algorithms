#include"sort.h"
#include<stddef.h>

/**
 * bubble_sort -sorts the array in ascending order
 * @array: -pointer to array to be sorted
 * @size: - holds the value of the size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				print_array(array, size);
			}
		}
	}
}
