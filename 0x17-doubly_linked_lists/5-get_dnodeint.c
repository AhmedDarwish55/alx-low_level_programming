#include "lists.h"

/**
 * get_dnodeint_at_index - ...
 * @head:...
 * @index: ...
 *
 * Return: ...
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node;
unsigned int n;
for (node = head, n = 0; node && n < index; node = node->next, n++)
	;
return (node);
}
