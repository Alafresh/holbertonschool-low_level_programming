#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - check the integer is positive, negative or zero
 *
 * Return: take an array from char
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is a positive number \n", n);
else if (n < 0)
printf("%d is a negative number \n", n);
else
printf("0 is neither positive nor negative");
return (0);
}
