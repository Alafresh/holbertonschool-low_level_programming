#include "holberton.h"

int checkPalindrome(char *s, int n);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: address of the string
 * Return: 0 and 1.
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (checkPalindrome(s, n - 1));
}

/**
 * checkPalindrome - check the code for Holberton School students.
 * @s: address of the string
 * @n: the length of the string
 * Return: 0 or 1.
 */

int checkPalindrome(char *s, int n)
{
	if (n < 0)
	return (1);
	if (*s == *(s + n))
	return (checkPalindrome(s + 1, n - 2));
	return (0);
}

/**
 * _strlen_recursion - returns the length og a string.
 * @s: pointer
 * Return: length.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	return (1 + _strlen_recursion(s + 1));
	return (*s);
}
