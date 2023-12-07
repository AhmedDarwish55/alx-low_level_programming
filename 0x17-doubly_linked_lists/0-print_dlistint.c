#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - ...
 * @h: ...
 *
 * Return: the number of modes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t s = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
