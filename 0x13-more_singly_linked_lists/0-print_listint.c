#include "lists.h"

/**
 * print_listint - prints linked list
 * @k: pointer
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *j)
{
size_t i = 0;
while (j)
{
printf("%d\n", j->n);
j = j->next;
i++;
}
return (i);
}
