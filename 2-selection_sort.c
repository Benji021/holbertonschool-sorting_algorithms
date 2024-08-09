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
    int *min;
    size_t i, j;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        min = array + i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < *min)
                min = array + j;
        }

        if (min != (array + i))
        {
            // Échange des éléments
            int temp = array[i];
            array[i] = *min;
            *min = temp;

            // Affichage de l'état du tableau après l'échange
            for (j = 0; j < size; j++)
            {
                printf("%d", array[j]);
                if (j < size - 1)
                    printf(", ");
            }
            printf("\n");
        }
    }
}
