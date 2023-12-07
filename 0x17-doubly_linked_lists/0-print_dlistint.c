#include "lists.h"

/**
 * print_dlistint - ...
 * @h: ...
 *
 * Return: the number of modes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
