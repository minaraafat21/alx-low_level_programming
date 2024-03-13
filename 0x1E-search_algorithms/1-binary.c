#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */

void print_array(int *array, int size)
{
    int i;

    if (array == NULL || size == 0)
        return;

    printf("Searching in array: ");

    for (i = 0; i < size; i++)
    {
        if (i == 0)
            printf("%d", array[i]);
        else
            printf(", %d", array[i]);
    }

    printf("\n");
}
/**
 * binary_search - find value in sorted array using binary search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to be searched for
 *
 * Return: index position of value or -1 if not found or array is null
 */

int binary_search(int *array, size_t size, int value)
{
    int l = 0;
    int r = size - 1;
    if (array == NULL)
        return (-1);

    while (l <= r)
    {
        int middle = (l + r) / 2;
        print_array(array, size);
        if (array[middle] < value)
            l = middle + 1;
        else if (array[middle] > value)
            r = middle - 1;
        else
            return middle;
    }
    return -1;
}
