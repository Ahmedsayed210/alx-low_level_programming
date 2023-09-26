#include "lists.h"
/**
 * sum_listint - return sum of all data
 * @head: pointer to tje first node
 *
 * Return: i
*/
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}

