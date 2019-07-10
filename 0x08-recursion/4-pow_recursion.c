#include "holberton.h"

/**
 * _pow_recursion - returns x raised to the power of y (x**y).
 * @x: floating point base value
 * @y: floating point power value
 * Return: the result of raising x to the power y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	else if (y < 0)
	return (-1);
	return (x * _pow_recursion(x, y - 1));
}
