#include <stdio.h>
/**
 * main -  Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)

{
char be;
for (be = 'a'; be <= 'z'; be++)
if (be != 'q' && be != 'e')
putchar(be);
putchar('\n');

return (0);
}
