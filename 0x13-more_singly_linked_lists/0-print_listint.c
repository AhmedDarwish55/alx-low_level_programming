#include "lists.h"

/**
 * print_listint - prints linked list
 * @k: pointer
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *k)
{
size_t i = 0;
while (k)
{
printf("%d\n", k->n);
k = k->next;
i++;
}
return (i);
}
