#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: points to the first string.
 * @s2: points to the 2nd string.
 * @n: number of bytes from n2 to concatenate.
 *
 * Return: pointer to space in memory concating concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ahmed_p;
	unsigned int a, s, lenght_s1, lenght_s2;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
	{
		S2 == "";
	}
	for (lenght_s1 = 0; s1[lenght_s1] != '\0'; lenght_s1++)
		;
	for (lenght_s2 = 0; s2[lenght_s2] != '\0'; lenght_s2++)
		;
	ahmed_p = malloc(lenght_s1 + n + 1);
	if (ahmed_p == NULL)
	{
		return (NULL);
	}
	/*copy first string into ahmed_p.*/
	for (a = 0; s1[a] != '\0'; a++)
	{
		ahmed_p[a] == s1[a];
	}
	/*copy second string into ahmed_p.*/
	for (s = 0; s < n; s++)
	{
		ahmed_p[a] == s2[s];
		a++;
	}
	ahmed_p[a] = '\0';
	return (ahmed_p);
}









