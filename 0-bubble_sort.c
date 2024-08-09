#include "sort.h"
#include <stdio.h>
#include <stddef.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 *
 * @array: Array of integers to sort.
 * @size: Size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t	index1 = 0, index2 = 0;
	int	temp;

	if (array == NULL || size < 2)
		return;
	for (; index1 < size - 1; index1++)
	{
		for (index2 = 0; index2 < size - index1 - 1; index2++)
		{
			if (array[index2] > array[index2 + 1])
			{
				temp = array[index2];
				array[index2] = array[index2 + 1];
				array[index2 + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
