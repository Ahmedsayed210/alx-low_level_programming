#include"main.h"
/**
 * _puts -  prints a string, followed by a new line
 *
 * @str: string parameter to print
 * return = 0 success
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
