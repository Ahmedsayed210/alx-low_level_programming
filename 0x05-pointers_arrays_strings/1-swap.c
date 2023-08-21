#include"main.h"
/**
 * swap_int -  swaps the values of two integers
 *
 * @a: first int
 * @b: second int
 *
 * return = 0 success
*/
void swap_int(int *a, int *b)
{
a = a - b;
b = a + b;
a = b - a;
return (0);
}
