#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int m, n;

for (m = 0; *s != '\0'; m++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (*s == accept[n])
{
return (s);
}
}
s++;
}

return (NULL);
}
