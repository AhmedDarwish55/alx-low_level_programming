#include "lists.h"

/**
 * listint_len - ...
 * @k: ...
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *k)
{
size_t i = 0;
while (k)
{
k = k->next;
i++;
}
return (i);
}
