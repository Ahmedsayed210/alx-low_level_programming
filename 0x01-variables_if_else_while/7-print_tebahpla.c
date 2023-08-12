#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-is the main function that prints the lowercase alphabet in reverse
 *
 * Return:returns always zero
 */
int main(void)
{
int c = 122;
for (; c >= 97; c--)
{
putchar(c);
}
putchar(10);
return (0);
}
