#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: pointer to intger
*/

void print_binary(unsigned long int n)
{
	int bit = size of(n) * 8, printed_num = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed_num++;
		}
		else if (printed_num)
			_putchar('0');
	}
	if (!printed_num)
		_putchar('0');
}
