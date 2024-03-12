#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t l = 0, h = size - 1, mid;

    if (array == NULL)
        return -1;

    while (l <= h)
    {
        printf("Searching in array: ");
        print_array(array, l, h);
        mid = (l + h) / 2;
        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            l = mid + 1;
        else
            h = mid - 1;
    }

    return -1;
}

/**
 * print_array - prints the elements of an array between two indices
 * @array: pointer to the first element of the array
 * @start: starting index
 * @end: ending index
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");
}
