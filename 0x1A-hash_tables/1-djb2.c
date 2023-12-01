#include "hash_tables.h"

/**
 * hash_djb2 -  simple hash function designed for generating hash values from strings.
 * @str: string used to generate hash value
 *
 * Return: unsigned long integer representing the computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
