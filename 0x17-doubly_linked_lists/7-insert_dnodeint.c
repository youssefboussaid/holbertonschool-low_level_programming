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
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp = *h;
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (idx == 0)
	{
		return (add_dnodeint(h, n));
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
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
