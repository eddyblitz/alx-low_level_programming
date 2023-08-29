#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the first occurrence of the substring needle.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)

{
int m, n;

for (m = 0; haystack[m] != '\0'; m++)
{
for (n = 0; needle[n] != '\0'; n++)
{
if (haystack[m + n] != needle[n])
break;
}
if (!needle[n])
return (&haystack[m]);
}
return (NULL);
}
