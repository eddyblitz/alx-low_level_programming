#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
unsigned long int fibo1 = 1, fibo2 = 2, next;

printf("%lu, " fibo1);

for (n = 2; n < 50; n++)
{
printf("%lu", fibo2);	
next = fibo1 + fibo2;
fibo1 = fibo2;
fibo2 = next;
if (n !=49)
printf(",  ");	
}

printf("\n");
return (0);
}
