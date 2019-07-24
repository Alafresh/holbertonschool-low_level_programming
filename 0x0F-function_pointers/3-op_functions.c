#include <stdio.h>
#include "3-calc.h"

/**
* op_add - sum two numbers.
* @a: num1, numerator
* @b: num2, denominator
* Return: the sum of a and b.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtraction two numbers
* @a: num1, numerator
* @b: num2, denominator
* Return: the subtraction of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplication of two numbers
* @a: num1, numerator
* @b: num2, denominator
* Return: the product of a and b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide two numbers
* @a: num1, numerator
* @b: num2, denominator
* Return: the result of the division of a by b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - remainder of the division of a by b
* @a: num1, numerator
* @b: num2, denominator
* Return: remainder of the division of a by b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
