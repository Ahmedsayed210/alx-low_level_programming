#include"main.h"
/**
 * _strcat - concat 2 string
 *
 * @dest: char to check
 * @src: char to check
 *
 * Return: char
*/
char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2]; src++)
dest[c++] = src[c2];
return (dest);
}
