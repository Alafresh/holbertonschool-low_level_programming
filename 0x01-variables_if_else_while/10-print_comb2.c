#include <stdio.h>
/**
* main - prints the numbers from 00 to 99
*
* Return: take an array from char
*/
int main(void)
{
char a;
char b;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
putchar(a);
putchar(b);
if (a <= '8' || b <= '8')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
