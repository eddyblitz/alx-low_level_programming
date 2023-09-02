#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a number.
 * @n: The input number to check for primality.
 * @q: The current divisor to test.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int q)
{
if (n <= 1)
return (0);

if (q == 1)
return (1);

if (n % q == 0)
return (0);

return (is_prime_recursive(n, q - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The input integer to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (is_prime_recursive(n, n - 1));
}
