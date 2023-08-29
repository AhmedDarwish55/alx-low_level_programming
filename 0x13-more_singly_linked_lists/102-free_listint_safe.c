#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop_fl - find a loop in a list
 *
 * @head: pointer of linked list
 *
 * Return: address of the node where loop start, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
listint_t *ptr, *last;

if (head == NULL)
return (NULL);

for (last = head->next; last != NULL; last = last->next)
{
if (last == last->next)
return (last);
for (ptr = head; ptr != last; ptr = ptr->next)
if (ptr == last->next)
return (last->next);
}
return (NULL);
}
/**
 * free_listint_safe - ...
 * @h: head of list
 *
 * Return: number of nodes free
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *next, *loopnode;
size_t length;
int loop = 1;
if (h == NULL || *h == NULL)
return (0);
loopnode = find_listint_loop_fl(*h);
for (length = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
{
length++;
next = (*h)->next;
if (*h == loopnode && loop)
{
if (loopnode == loopnode->next)
{
free(*h);
break;
}
length++;
next = next->next;
free((*h)->next);
loop = 0;
}
free(*h);
}
*h = NULL;
return (length);
}
