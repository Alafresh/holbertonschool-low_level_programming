#include "holberton.h"

/**
* _isupper - check the variable is UPPERCASE.
* @c: is the variable.
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
