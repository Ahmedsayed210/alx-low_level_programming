#include "main.h"
/**
 * flip_bits -  returns the number of bits
 * @n: pointer to integer
 * @m: pointer to integer
 *
 * Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int i = 0;

	while (x)
	{
		if (x & 1ul)
			i++;
		x = x >> 1;
	}
	return (i);
}
