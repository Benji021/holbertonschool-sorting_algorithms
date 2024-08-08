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
    int temp;
    size_t i, j, k;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* Échanger array[j] et array[j + 1] */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                /* Imprimer le tableau après chaque permutation */
                for (k = 0; k < size; k++)
                {
                    printf("%d ", array[k]);
                }
                printf("\n");
            }
        }
    }
}
