#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */

void puts2(char *str)
{
int b;

for (b = 0; str[b] != '\0'; b += 2)
{
putchar(str[b]);
}

putchar('\n');
}
