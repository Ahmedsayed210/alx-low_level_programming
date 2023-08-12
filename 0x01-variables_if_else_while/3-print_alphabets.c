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
for (; c <= 122; c++)
{
putchar(c);
}
int a = 65;
for (; a <= 90; a++)
{
putchar(a);
}
putchar(10);
return (0);
}
