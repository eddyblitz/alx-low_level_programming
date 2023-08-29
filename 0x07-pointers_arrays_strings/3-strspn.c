#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s which consists
 *           only of bytes from the string accept.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 *         of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int m, n, f, flag;

	f = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		flag = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
