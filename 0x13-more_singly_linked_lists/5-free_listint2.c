#include "lists.h"

/**
 * free_listint2 - frees the list
 * @head: address of pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *node, *n;
if (!head)
return;
node = *head;

while (node)
{

n = node;
node = node->next;
free(n);
}
*head = NULL;
}
