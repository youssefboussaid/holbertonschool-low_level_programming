#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the element of the list
 * @h: head of the list
 *
 * Return: the element of the list
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
