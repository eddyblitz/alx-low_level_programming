#include <stdio.h>
/**
 * main - Prints all single digit numbers followed by a new line.
 *
 * Return: 0
 *
 */

int main(void)
{
int b;
for (b = 0; b < 10; b++)
putchar(b + '0');

putchar('\n');
return (0);
}
