#include "main.h"

/**
 * set_bit - ...
 * @n: ...
 * @index:
 * ...
 *
 * Return: 1 if success, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (!!(*n |= 1L << index));
}
