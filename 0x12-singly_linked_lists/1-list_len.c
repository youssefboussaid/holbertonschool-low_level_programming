#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: a variable pointing to a struct of type list_t
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
