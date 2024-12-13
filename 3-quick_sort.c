#include "sort.h"

/**
 * partition -rearranges the array in peculiar condition order
 * @array: -points to the array of int
 * @min_index: -the firt index of the array
 * @pivot_index: -the last index of the array
 * @size: -the size of the array
 * Return: (division_index)
 */

int partition(int *array, int min_index, int pivot_index, size_t size)
{
	int i, j, pivot, tmp, sep_index;

	pivot = array[pivot_index];
	i = min_index - 1;

	for (j = min_index; j < pivot_index; j++)
	{
		if (array[j] < array[pivot_index])
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}

	}
	if (array[i + 1] > pivot)
	{
		tmp = array[i + 1];
		array[i + 1] = array[pivot_index];
		array[pivot_index] = tmp;
		print_array(array, size);
	}
	sep_index = i + 1;
	return (sep_index);
}

/**
* lomuto_sorting -recursivly calls for fragmentation
* @array: -points to the array of int
* @min_index: -the firt index of the array
* @pivot_index: -the last index of the array
* @size: -the size of the array
*/

void lomuto_sorting(int *array, int min_index, int pivot_index, size_t size)
{
	int sep_index;

	if (min_index < pivot_index)
	{
		sep_index = partition(array, min_index, pivot_index, size);
		lomuto_sorting(array, min_index, sep_index - 1, size);
		lomuto_sorting(array, sep_index + 1, pivot_index, size);
	}
}

/**
* quick_sort -applies lomutos quicksort algo
* @array: -points to the array
* @size: -holds the value of the size
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	lomuto_sorting(array, 0, size - 1, size);
}
