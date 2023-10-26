#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int sum = 0;
while (xor)
{
if (xor & 1ul)
sum++;
xor = xor >> 1;
}
return (sum);
}
