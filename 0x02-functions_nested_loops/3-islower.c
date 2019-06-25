#include "holberton.h"

/**
* _islower - check for lowercase character..
* @c: is the value to compared with the alphabet
* Return: 1 if the stament is true or 0 if is false.
*/

int _islower(int c)
{
	if (c < 'z' && c > 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
