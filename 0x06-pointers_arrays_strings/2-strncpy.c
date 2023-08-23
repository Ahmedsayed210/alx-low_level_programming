#include"main.h"
/**
 * _strncpy - *_strncpy
 *
 * @dest: char to check
 * @src: char to check
 * @n: int to check
 *
 * Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
