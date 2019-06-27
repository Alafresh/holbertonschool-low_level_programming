#include <stdio.h>

/**
* main - insteainstead multiplies of 3 print Fizz and 5 print Buzzz.
*
* Return: Always 0.
*/

int main(void)
{
	int a;

	a = 1;
	do {
		if (a == 100)
		{
			printf("Buzz\n");
		}
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
			a++;
			continue;
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
			a++;
			continue;
		}
		else if (a % 3 == 0)
		{
			a++;
			printf("Fizz ");
			continue;
		}
		printf("%d ", a);
		a++;
	}	while (a <= 101);
	return (0);
}
