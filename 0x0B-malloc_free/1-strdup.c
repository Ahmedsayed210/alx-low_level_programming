#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int ahmed, len;

	ahmed = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	while ((a[ahmed] = str[ahmed]) != '\0')
		ahmed++;

	return (a);
}
