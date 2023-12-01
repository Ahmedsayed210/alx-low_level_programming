#ifndef MAIN_H
#define MAIN.H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * djb2 - simple hash function designed for generating hash values from strings.
 * str: pointer taken as it's input
 *
 * Return: unsigned long integer representing the computed hash value.
*/

unsigned long int djb2(char *str)
{
  unsigned long int hash = 5381;
  int c;
  while ((c = *str++))
    {
      hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
  return (hash);
}


/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
#endif 
