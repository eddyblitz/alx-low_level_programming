#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @p: function parameter
 *
 * Return: the last digit of the number
 */

int print_last_digit(int p)
{
int o;

o = p % 10;

if (p < 0)
o = -o;

_putchar(o + '0');

return (o);
}
