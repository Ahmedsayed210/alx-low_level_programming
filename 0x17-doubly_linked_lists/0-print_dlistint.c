#include "dlists.h"
/**
 * print_dlistint - prints all the elements
 * @h:the head of the list
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h);
{
	size_t current = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		current++
	}
	return (current);
}
