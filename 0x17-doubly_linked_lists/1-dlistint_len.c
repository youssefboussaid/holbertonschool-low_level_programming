#include "lists.h"
/**
 * dlistint_len  - number of elements in a linked dlistint_t
 * @h: pointer to a struct of type dlistint_t
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
