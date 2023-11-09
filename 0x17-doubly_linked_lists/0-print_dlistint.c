#include "lists.h"
/**
 * print_dlistint - print all the elements
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t current = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		current++;
	}

	return (current);
}

