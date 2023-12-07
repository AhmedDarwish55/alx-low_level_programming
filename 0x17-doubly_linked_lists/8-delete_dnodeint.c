#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node of index
 * @head: the pointer
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node, *pre_node;
unsigned int j = 0;
if (!head || !*head)
return (-1);

if (!index)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}
node = *head;
while (node)
{
if (j == index)
{
pre_node->next = node->next;
free(node);
return (1);
}
j++;
pre_node = node;
node = node->next;
}
return (-1);
}
