#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *ptr, *ptr1 = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", ptr1, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ptr1, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ptr1, va_arg(list, double));
					break;
				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", ptr1, ptr);
					break;
				default:
					a++;
					continue;
			}
			ptr1 = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(list);
}
