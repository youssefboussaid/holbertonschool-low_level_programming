#include "lists.h"
/**
 * sum_dlistint - sums the values of the linked list
 * @head: pointer to the linked list
 *
 * Return: sum²:
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
