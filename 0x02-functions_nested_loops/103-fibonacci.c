#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long fib[3];
unsigned long sum = 2;

fib[0] = 1;
fib[1] = 2;

while (fib[0] + fib[1] <= 4000000)
{
fib[2] = fib[0] + fib[1];
if (fib[2] % 2 == 0)
{
sum += fib[2];
}
fib[0] = fib[1];
fib[1] = fib[2];
}
printf("%lu\n", sum);

return (0);
}
