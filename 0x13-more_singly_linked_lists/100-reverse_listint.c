#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: ...
 *
 * Return: ...
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *node = NULL, *temp = NULL;
if (!head || !*head)
return (NULL);

node = *head;
*head = NULL;

while (node)
{
temp = node->next;
node->next = *head;
*head = node;
node = temp;
}
return (*head);
}
