#include "lists.h"

/**
 * free_listint2 - ...
 * @head: ...
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *node, *n;
if (!head)
return;
node = *head;

while (head)
{
node = node->next;
n = node;
free(n);
}
*head = NULL;
}
