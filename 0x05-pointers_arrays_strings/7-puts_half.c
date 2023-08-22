#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
int len, c, i;

len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
putchar(str[i]);
}
}
else if (len % 2)
{
for (c = (len - 1) / 2; c < len - 1; c++)
{
putchar(str[c + 1]);
}
}
putchar('\n');
}
