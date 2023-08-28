#include "lists.h"

/**
 * free_listint - ...
 * @head: ...
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *node;
while (head)
{
head = head->next;
node = head;
free(node);
}
}
