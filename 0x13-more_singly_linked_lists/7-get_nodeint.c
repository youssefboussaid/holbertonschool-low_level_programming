#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the value of a certain node giving
 * @head: pointer to struct
 * @index: position of the a node
 *
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_h;

	if (!head)
		return (NULL);
	temp_h = head;
	while (temp_h)
	{
		if (i == index)
			return (temp_h);
		temp_h = temp_h->next;
		i++;
	}
	return (NULL);
}
