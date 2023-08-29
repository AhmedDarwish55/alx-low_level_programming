#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _re - reallocate memory
 * @list: the old list
 * @size: size of list
 * @fresh: new node of the list
 *
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size,
		const listint_t *fresh)
{
const listint_t **newlist;
size_t i;
newlist = malloc(size * sizeof(listint_t *));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
newlist[i] = list[i];
newlist[i] = fresh;
free(list);
return (newlist);
}

/**
 * print_listint_safe - prints
 * @head: pointer
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i, j = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (i = 0; i < j; i++)
{
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (j);
}
}
j++;
list = _r(list, j, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (j);
}
