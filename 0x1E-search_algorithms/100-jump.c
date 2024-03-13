#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers using Jump Search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int jump = (int)sqrt(size); // Calculate the jump step

    int left = 0, right = jump;
    
    printf("Value checked array[%d] = [%d]\n", left, array[left]);
    while (right < (int)size && array[right] <= value)
    {
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
        left = right;
        right += jump;
    }
    
    printf("Value found between indexes [%d] and [%d]\n", left, right);
    
    // Linear search within the block
    for (int i = left; i < (int)size && i <= right; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}