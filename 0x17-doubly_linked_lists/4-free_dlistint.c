#include "lists.h"
/**
 * free_dlistint - frees a list_t list.
 *@head: pointer.
 *Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *T;

	while (head != NULL)
	{
		T = head->next;
		free(head);
		head = T;
	}
}
