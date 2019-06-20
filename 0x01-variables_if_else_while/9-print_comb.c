#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
*
* Return: take an array from char
*/
int main(void)
{
int a;
int b;
for (a = 0; a <= 9 ; a++)
{
b = a + '0';
putchar(b);
if (b <= '8')
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
