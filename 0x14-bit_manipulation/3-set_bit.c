#include "main.h"
/**
 * set_bit -  sets the value of a bit
 * @n: pointer to integer
 * @index: pointer to intger
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
