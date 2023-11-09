#ifndef DLISTS_H
#define DLISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: points to integer
 * @prev: points to pointer
 * @next: points to pointer
*/
typedef struct dlistint_s
{
	struct dlistint_t *prev;
	int n;
	struct dlistint_t *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);






#endif /*DLISTS_H*/
