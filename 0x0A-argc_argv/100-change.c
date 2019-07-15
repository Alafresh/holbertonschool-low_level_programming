#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int dinerito;
	int i, tmp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	dinerito = atoi(argv[1]);
	if (dinerito < 0)
		printf("0\n");
	for (i = 0; dinerito > 0; i++)
		if (dinerito >= coins[0])
		{
			dinerito -= coins[0];
			tmp++;
		}
		else if (dinerito >= coins[1])
		{
			dinerito -= coins[1];
			tmp++;
		}
		else if (dinerito >= coins[2])
		{
			dinerito -= coins[2];
			tmp++;
		}
		else if (dinerito >= coins[3])
		{
			dinerito -= coins[3];
			tmp++;
		}
		else
		{
			dinerito -= coins[4];
			tmp++;
		}
	printf("%d\n", tmp);
}
