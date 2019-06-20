#include <stdio.h>
/**
* main - all the numbers of base 16 in lowercase.
*
* Return: take an array from char
*/
int main(void)
{
char f;
int a;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (f = 'a'; f <= 'f'; f++)
putchar(f);
putchar('\n');
return (0);
}
