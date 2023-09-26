#include "lists.h"

/**
 * find_listint_loop - finds the loop in
 * @head: pointer to the first node
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snode = head;
	listint_t *fnode = head;

	if (!head)
		return (NULL);

	while (snode && fnode && fnode->next)
	{
		fnode = fnode->next->next;
		snode = snode->next;
		if (fnode == snode)
		{
			snode = head;
			while (snode != fnode)
			{
				snode = snode->next;
				fnode = fnode->next;
			}
			return (fnode);
		}
	}

	return (NULL);
}
