#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: 0
 *
 */

int main(void)
{
char be;

for (be = 'a'; be <= 'z'; be++)
putchar(be);

for (be = 'A'; be <= 'Z'; be++)
putchar(be);

putchar('\n');

return (0);
}
