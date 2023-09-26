#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the first node
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *pre_node;
	unsigned int a = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (a == index)
		{
			pre_node->next = node->next;
			free(node);
			return (1);
		}
		a++;
		pre_node = node;
		node = node->next;
	}
	return (-1);
}





