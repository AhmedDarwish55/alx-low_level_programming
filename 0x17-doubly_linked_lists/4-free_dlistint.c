#include "lists.h"

/**
 * free_dlistint - ...
 * @head: ...
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *node;

while (head)
{
	node = head;
	head = head->next;
	free(node);
}
}
