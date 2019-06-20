#include <stdio.h>
/**
* main - Print all the letters except q and e.
*
* Return: take an array from char
*/
int main(void)
{
char a;
a = 'a';
do {
if (a == 'q' || a == 'e')
{
a++;
continue;
}
putchar(a);
a++;
}
while (a < 'z')
putchar('\n');
return (0);
}
