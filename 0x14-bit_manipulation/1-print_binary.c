#include "main.h"

/**
 * print_binary - prints a binary
 * @n: the binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
int num = sizeof(n) * 8, print = 0;

while (num)
{
if (n & 1L << --num)
{
_putchar('1');
print++;
}
else if (print)
_putchar('0');
}
if (!print)
_putchar('0');
}
