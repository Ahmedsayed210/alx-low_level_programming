#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * second - prints Hello, Holberton
 * function is executed
 */
void second(void)
{
	printf("Hello, Holberton\n");
}
