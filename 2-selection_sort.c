#include <stdio.h>

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection Sort algorithm.
 * @array: Pointer to the first element of the array to be sorted.
 * @size: The number of elements in the array.
 *
 * Description: Prints the array after each time two elements are swapped.
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;
    int temp;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
        {
            temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;

            /* Print the array after each swap */
            for (j = 0; j < size - 1; j++)
                printf("%d, ", array[j]);
            printf("%d\n", array[size - 1]);
        }
    }
}

