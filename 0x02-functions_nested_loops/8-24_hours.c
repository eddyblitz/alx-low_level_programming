#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
int c, d;

for (c = 0; c < 24; c++)
{
for (d = 0; d < 60; d++)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');

_putchar(':');

_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
_putchar('\n');
}
}
}
