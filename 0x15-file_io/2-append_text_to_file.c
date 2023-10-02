#include "main.h"
/**
 * _strlen - return the lenght of string
 * @c: pointer to char
 *
 * Return: integer lenght of string
*/

int _strlen(char *c)
{
	int a = 0;

	if (!c)
		return (0);

	while (*c++)
		a++;
	return (a);
}

/**
 * append_text_to_file - creates a file
 * @filename: the name of the file
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f1;
	ssize_t memory = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	f1 = open(filename, O_WRONLY | O_APPEND);
	if (f1 == -1)
		return (-1);
	if (len)
		memory = write(f1, text_content, len);
	close(f1);
	return (memory == len ? 1 : -1);
}
