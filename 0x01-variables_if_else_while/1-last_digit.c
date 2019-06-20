#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - check the last number is greater than 5,less than 6 or zero
 *
 * Return: take an array from char
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last = n % 10;
if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5 \n", n, last);
}
else if (last < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, last);
}
else
{
printf("and is 0");
}
return (0);
}
