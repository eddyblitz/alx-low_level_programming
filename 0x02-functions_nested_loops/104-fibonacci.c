#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, first = 1, second = 2, next;

for (i = 0; i < 98; i++)
{
next = first + second;
printf("%d, ", next);
first = second;
second = next;
}

printf("\n");

return (0);
}
