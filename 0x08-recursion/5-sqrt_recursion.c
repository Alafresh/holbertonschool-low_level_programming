#include "holberton.h"

/**
 * helpme - help to find the square root.
 * @n: is the constant
 * @x: number
 * Return: Always 0.
 */

int helpme(int n, int x)
{
	if (x * x == n)
	return (x);
	else if (x * x > n)
	return (-1);
	else
	return (helpme(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: thid is the value
 * Return: the natural square root.
 */

int _sqrt_recursion(int n)
{
	return (helpme(n, 1));
}
