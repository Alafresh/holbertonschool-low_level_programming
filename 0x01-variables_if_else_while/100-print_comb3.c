#include <stdio.h>
/**
* main - prints the numbers from 00 to 99
*
* Return: take an array from char
*/
int main(void)
{
int a;
int b;
for (a = '0'; a <= '8'; a++)
{
for (b = '1'; b <= '9'; b++)
{
if (a < b)
{
if (a != b)
{
putchar(a);
putchar(b);
if (a <= '7' || b <= '8')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
