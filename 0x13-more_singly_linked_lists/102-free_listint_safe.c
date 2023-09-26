#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int a;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
