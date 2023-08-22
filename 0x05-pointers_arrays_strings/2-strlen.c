#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int b;

b = 0;

while (s[b] != '\0')
{
b++;
}

return (b);
}
