#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 *
 */

int main(void)
{
int b;

for (b = 0; b < 10; b++)
{
putchar(b + '0');

if (b != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
