#include <stdio.h>
#include "holberton.h"

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
