#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print all the data about the dog
 * @d: a dog structure
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name:%s\n", (d->name) ? (d->name) : "(nil)");
printf("Age:%f\n", (d->age) : 0);
printf("Name:%s\n", (d->owner) ? (d->owner) : "(nil)");
}
}
