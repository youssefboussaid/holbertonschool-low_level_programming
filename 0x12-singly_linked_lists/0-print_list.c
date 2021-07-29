#include "lists.h"
#include <stdio.h>
/**
 * print_list - print the element of the list
 * @h: head of the list
 *
 * Return: the element of the list
 */

size_t print_list(const list_t *h)
{
	int n = 0;


	while (h != NULL)
	{
		if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
		else
		printf("[0] (nil)\n");
		n++;
		h = h->next;
	}
	return (n);
}
