#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int ahmed, menna, doaa, l = 0, r = 0;

	for (ahmed = 0; ahmed < size; ahmed++)
	{
		doaa = (ahmed * size) + ahmed;
		l += *(a + doaa);
	}
	for (menna = 0; menna < size; menna++)
	{
		doaa = (menna * size) + (size - 1 - menna);
		r += *(a + doaa);
	}
	printf("%i, %i\n", l, r);
}
