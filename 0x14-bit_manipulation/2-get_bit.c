#include "main.h"
/**
 * get_bit - gets the bits at the index
 * @n: pointer to integer
 * @index: pointer to integer
 *
 * Return: the value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	else if
		return (n >> index & 1);
}
