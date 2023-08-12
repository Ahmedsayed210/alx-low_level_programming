#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-is the main function.
 *
 * Return: always returns 0 or 1
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("d% is positive\n", n);
}
if (n == 0)
{
printf("d% is zero\n", n);
}
if (n < 0)
{
printf("d% is negative\n", n);
}
return (0);
}
