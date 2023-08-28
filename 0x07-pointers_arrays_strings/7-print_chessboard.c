#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int ahmed, doaa;

	for (ahmed = 0; ahmed < 8; ahmed++)
	{
		for (doaa = 0; doaa < 8; doaa++)
		{
			_putchar(a[ahmed][doaa]);
		}
		_putchar('\n');
	}
}
