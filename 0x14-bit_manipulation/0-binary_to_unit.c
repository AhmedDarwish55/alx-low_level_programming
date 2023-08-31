#include "main.h"

/**
 * binary_to_unit - converts binary
 * @b: ...
 *
 * Return: ...
 */
unsigned int binary_to_unit(const char *b)
{
unsigned int i = 0;

if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
i = i * 2 + (*b++ - '0');
}
return (i);
}
