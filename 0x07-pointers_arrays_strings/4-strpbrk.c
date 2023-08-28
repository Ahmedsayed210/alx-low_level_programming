#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int sahr;
		while (*s)
		{
			for (sahr = 0; accept[sahr]; sahr++)
			{
				if (*s == accept[sahr])
					return (s);
			}
			s++;
		}
	return (NULL);
}
