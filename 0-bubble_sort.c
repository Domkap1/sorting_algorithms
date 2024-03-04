#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the bubble sort algorithm.
 * @array: Pointer to the first element of the array to be sorted.
 * @size: The number of elements in the array.
 *
 * Return: No return value (void).
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    int tmp;
    bool swapped;

    if (array == NULL || size < 2)
        return;

    do {
        swapped = false;

        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                swapped = true;
            }
        }
        len--;
    } while (swapped);
}

