#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ahmed;

	for (ahmed = 0; ahmed < argc; ahmed++)
	{
		printf("%s\n", argv[ahmed]);
	}

	return (0);
}
