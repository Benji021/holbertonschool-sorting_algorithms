#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t current_i;
	/*Index of the currently found minimum element*/
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		current_i = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[current_i] > array[j])
				current_i = j;
		}
	/* swap if smaller elem is found*/
		if (current_i != i)
		{
			temp = array[i];
			array[i] = array[current_i];
			array[current_i] = temp;
			print_array(array, size);
		}
	}
}
