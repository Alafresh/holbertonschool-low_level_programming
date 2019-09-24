#include "holberton.h"

/**
* _isdigit - evaluate what is digit.
* @c: is the variable
* Return: Always 0.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
