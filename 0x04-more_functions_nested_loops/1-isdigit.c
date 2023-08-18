#include "main.h"
/**
 * _isdigit - Checks if a character is a digit between '0' and '9'.
 * @c: The character to check.
 *
 * Return: 1 or 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
