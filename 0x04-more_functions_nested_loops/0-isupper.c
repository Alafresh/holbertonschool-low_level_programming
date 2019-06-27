#include "holberton.h"

/**
* _isupper - check the variable is UPPERCASE.
* @c: is the variable.
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (1);
}
