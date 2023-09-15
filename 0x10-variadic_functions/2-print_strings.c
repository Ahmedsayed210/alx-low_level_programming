#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *ptr;

	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		ptr = va_arg(list, char *);
		if (!ptr)
			ptr = "(nil)";
		if (!separator)
			printf("%s", ptr);
		else if (separator && a == 0)
			printf("%s", ptr);
		else
			printf("%s%s", separator, ptr);
	}

	printf("\n");

	va_end(list);
}
