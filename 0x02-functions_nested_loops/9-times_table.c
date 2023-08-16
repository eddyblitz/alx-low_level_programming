#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: empty
 */
void times_table(void)
{
int row, col, result;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
result = row * col;

if (col == 0)
_putchar('0' + result);
else if (result < 10)
{
_putchar(' ');
_putchar('0' + result);
}
else
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
if (col != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
