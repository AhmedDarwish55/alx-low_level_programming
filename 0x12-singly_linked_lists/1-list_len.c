#include <stdio.h>
#include "lists.h"

/**
 * list_len - ...
 * @h: ...
 *
 * Return: number of element of h
 */

size_t list_len(const list_t *h)
{
size_t m = 0;
while (h)
{
m++;
h = h->next;
}
return (m);
}
