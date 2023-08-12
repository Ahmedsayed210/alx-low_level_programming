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
char a = 'A';
for (; c <= 122; c++)
{
putchar(c);
}
for (; a <= 'Z'; a++)
putchar(a);
putchar(10);
return (0);
}
