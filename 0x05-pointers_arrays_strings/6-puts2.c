#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */

void puts2(char *str)
{
int len, b;

len = 0;

while (str[len] != '\0')
{
len++;
}

for (b = 0; b < len; b += 2)
{
putchar(str[b]);
}

putchar('\n');
}
