#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i = strlen(s) - 1;

while (i >= 0)

{
putchar(s[i]);
i--;
}

putchar('\n');
}
