#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
int b;

for (b = 0; str[b] != '\0'; b++)
{
putchar(str[b]);
}
putchar('\n');
}
