#include "main.h"

/**
 * get_endianness - ...
 *
 * Return: 0 if big and 1 otherwise
 */
int get_endianness(void)
{
unsigned long int n = 1;
return (*(char *)&n);
}
