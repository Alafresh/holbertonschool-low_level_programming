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
		if (a % 3 == 0 && a % 5 == 0)
		{
			a++;
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			a++;
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			a++;
			printf("Fizz ");
		}
		if (a == 100)
		{
			printf("Buzz\n");
		}
		printf("%d ", a);
		a++;
	}	while (a <= 100);
	return (0);
}
