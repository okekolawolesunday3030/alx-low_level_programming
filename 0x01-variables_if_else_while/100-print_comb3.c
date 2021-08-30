#include <stdio.h>

/**
 * main - Print all possible combination of two digit
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (j < 58)
	{
		i = 48;
		if (j != i && j < i)
		{
	putchar(j);
	putchar(i);
	if (i == 57 && j == 56)
	{
		break;
	}
	putchar(',');
	putchar('.');
		}
	i++;
	}
	j++;
}
putchar('\n');
return (0);
