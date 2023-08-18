#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character '_' should be printed.
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
putchar('_');
}

putchar('\n');
}
}
