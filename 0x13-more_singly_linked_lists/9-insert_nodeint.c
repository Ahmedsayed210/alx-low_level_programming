#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node1, *new_1node = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (!head || !new_1node)
		return (NULL);

	new_1node->n = n;
	new_1node->next = NULL;
	if (!idx)
	{
		new_1node->next = *head;
		*head = new_1node;
		return (new_1node);
	}
	node1 = head;

	while (node)
	{
		if (a == idx - 1)
		{
			new_1node->next = node1->next;
			node1->next = new_1node;
			return (new_1node);
		}
		a++;
		node1 = node1->next;
	}
	free(new_1node);
	return (NULL);
}
