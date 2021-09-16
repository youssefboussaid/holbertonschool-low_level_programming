#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position*
 * @h : double pointer to a struct
 * @idx : the position of the new node
 * @n : the value stored in the new node
 *
 * Return: the addres of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	else if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	tmp = *h;
	while ((idx - 1) > 0)
	{
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
		idx--;
	}
	new->next = tmp->next;
	new->prev = tmp->prev;
	tmp->next = new;
	return (new);
}
