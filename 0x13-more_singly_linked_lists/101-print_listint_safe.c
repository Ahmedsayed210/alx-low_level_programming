#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *ahmed_n = NULL;
	size_t count = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		count++;
		tmp_n = tmp_n->next;
		ahmed_n = head;
		new_n = 0;
		while (new_n < count)
		{
			if (tmp_n == ahmed_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (count);
			}
			ahmed_n = ahmed_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
