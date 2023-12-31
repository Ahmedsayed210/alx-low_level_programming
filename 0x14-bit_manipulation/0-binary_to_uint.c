#include "main.h"
/**
 * binary_to_uint - converts a binary number
 * @b: pointer to char
 *
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		a = a * 2 + (*b++ - '0');
	}
	return (a);
}
