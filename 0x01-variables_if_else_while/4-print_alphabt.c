#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-is the main function that printts all alphabets in small letters
 *
 * Return:returns always zero
 */
int main(void)
{
int c = 97;
for (; c <= 100; c++)
{
putchar(c);
}
for (int a = 102; a <= 112; a++)
{
putchar (a);
}
for (int s = 113; s <= 122; s++)
{
putchar (s);
}
putchar(10);
return (0);
}
