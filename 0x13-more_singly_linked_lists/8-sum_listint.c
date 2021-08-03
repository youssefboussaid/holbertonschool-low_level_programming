#include "lists.h"
/**
 * sum_listint - sums the values of the linked list
 * @head: pointer to the linked list
 *
 * Return: sum²:
 */

int sum_listint(listint_t *head)
{
	int x = 0;

	if (!head)
		return (0);
	while (head)
	{
		x = x + head->n;
		head = head->next;
	}
	return (x);
}
