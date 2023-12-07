#include "lists.h"

/**
 * insert_dnodeint_at_index - ...
 * @h: ...
 * @idx: ...
 * @n: ...
 *
 * Return:...
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node, *new_node = malloc(sizeof(dlistint_t));
unsigned int j = 0;

if (!h || !new_node)
	return (NULL);
new_node->n = n;
new_node->next = NULL;
if (!idx)
{
new_node->next = *h;
*h = new_node;
return (new_node);
}
node = *h;
while (node)
{
if (j == idx - 1)
{
new_node->next = node->next;
node->next = new_node;
return (new_node);
}
j++;
node = node->next;
}
free(new_node);
return (NULL);
}
