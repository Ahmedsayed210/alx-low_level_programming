#include "lists.h"
/**
 * dlistint_len -  returns the number of elements
 * @h: points to headd of linked list
 *
 * Return: number od elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t lenght = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		lenght++, current = curremt->next;
	}
	return (lenght);
}
