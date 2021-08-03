#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - pop the head of a struct and retune it's balue
  * @head: double pointer of a struct
  *
  * Return:
  */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *newhead;

	if (*head == NULL)
		return (0);
	newhead = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = newhead;
	return (n);
}
