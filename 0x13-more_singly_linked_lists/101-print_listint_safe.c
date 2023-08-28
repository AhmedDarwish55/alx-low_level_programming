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
 * Return: ...
 */

const listint_t **re(const listint_t **list, size_t size,
		const listint_t *fresh)
{
const listint_t **new_list;
size_t i;
new_list = malloc(size = sizeof(listint_t *));
if (new_list == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
new_list[i] = list[i];
new_list[i] = fresh;
free(list);
return (new_list);
}

/**
 * print_listint_safe - prints
 * @head: ...
 *
 * Return: ...
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
list = re(list, j, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (j);
}
