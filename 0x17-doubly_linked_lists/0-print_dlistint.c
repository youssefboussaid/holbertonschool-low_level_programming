#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print the element of the double linked list
 * @h: head of the list
 *
 * Return: the element of the list
 */

size_t print_dlistint(const dlistint_t *h)
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
