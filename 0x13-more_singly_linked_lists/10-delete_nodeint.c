#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index -delete node
 * Description: Function that deletes the node at index index of a listint.
 * @head: pointer to a pointer of type listint_t (structure
 * @index: the inde of the node that should be deleted, index starts at 0
 * Return: 1 if succeed, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *start = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = start->next;
		free(start);
		return (1);
	}

	while (start != NULL && i < (index - 1))
	{
		start = start->next;
		i++;
	}

	if (start == NULL || start->next == NULL)
		return (-1);

	temp = start->next;
	start->next = temp->next;

	free(temp);

	return (1);
}
