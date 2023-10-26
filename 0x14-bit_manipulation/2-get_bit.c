#include "main.h"

/**
 * get_bit - gets the bit
 * @index: the bit
 * @n:the number of index
 *
 * Return: the bit statue
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (n >> index & 1);
}
