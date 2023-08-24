/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int o, p;

o = 0;
p = 0;

while (dest[o] != '\0')
o++;

while (src[p] != '\0' && p < n)
{
dest[o] = src[p];
o++;
p++;
}

dest[o] = '\0';

return (dest);
}
