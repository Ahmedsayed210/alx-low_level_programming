#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-is the main function that prints all the numbers of base 16
 *
 * Return:returns always zero
 */
int main(void)
{
int d = 48;
char h = 'a';
for (; d <= 57; d++)
{
putchar(d);
}
for (; h <= 'f'; h++)
putchar(h);
putchar(10);
return (0);
}
