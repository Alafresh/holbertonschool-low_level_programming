#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */


/**
 * main - check the last number is greater than 5,less than 6 or zero
 *
 * Return: take an array from char
 */
int main(void)
{
int last;
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last = n % 10;
if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
else if (last < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
return (0);
}
