#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (i != j && j != z && i != z && i < j && z > j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(z + '0');
					if (!(i == 7 && j == 8 && z == 9))
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
