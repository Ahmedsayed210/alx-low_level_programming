#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ahmed = 0;

	while (ahmed < n)
	{
		dest[ahmed] = src[ahmed];
		ahmed++;
	}

	return (dest);
}
