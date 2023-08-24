#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_codes = "4433007711";

while (*ptr != '\0')
{
char *leet_ptr = leet_chars;
char *leet_code = leet_codes;
int is_match = 0;

while (*leet_ptr != '\0')
{
if (*ptr == *leet_ptr)
{
*ptr = *leet_code;
is_match = 1;
break;
}
leet_ptr++;
leet_code++;
}

if (!is_match)
{
ptr++;
}
else
{
ptr++;
}
}

return (str);
}
