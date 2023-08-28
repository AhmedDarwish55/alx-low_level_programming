#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - find a loop
 * @head: pointer of linked list
 *
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *end, *ptr;
if (head == NULL)
return (NULL);

for (end = head->next; end != NULL; end = end->next)
{
if (end == end->next)
return (end);
for (ptr = head; ptr != end; ptr = ptr->next)
if (ptr == end->next)
return (end->next);
}
return (NULL);
}
