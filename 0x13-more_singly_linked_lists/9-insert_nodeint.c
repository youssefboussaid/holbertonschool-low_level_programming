#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position*
 * @head : double pointer to a struct
 * @idx : the position of the new node
 * @n : the value stored in the new node
 *
 * Return: the addres of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *tmp, *new;

	if (!head || *head)
		return (NULL);
	tmp = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (tmp)
	{
		if (pos + 1 == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
		}
		tmp = tmp->next;
		pos++;
	}
	return (NULL);
}
