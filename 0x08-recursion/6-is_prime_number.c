#include "holberton.h"

/**
 * divisor - help find the prime number.
 * @i: integer
 * @n: integer
 * Return: increment i and compare to n.
 */

int divisor(int i, int n)
{
	if (n == i)
	return (1);
	else if (n % i == 0)
	return (0);
	return (divisor(i + 1, n));
}

/**
 * is_prime_number - find the prime number.
 * @n: is the number to compare
 * Return: a prime number.
 */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
	return (0);
	return (divisor(2, n));
}

