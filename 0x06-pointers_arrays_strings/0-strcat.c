/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
int m, n;

m = 0;
n = 0;

while (dest[m] != '\0')
m++;

while (src[n] != '\0')
{
dest[m] = src[n];
m++;
n++;
}

dest[m] = '\0';

return (dest);
}
