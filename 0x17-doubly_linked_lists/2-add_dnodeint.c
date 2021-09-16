#include "lists.h"
/**
 * add_dnodeint - add a node in the begginning of a dlistint_t
 * @head: double pointer to a linked list
 * @n: integer
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
