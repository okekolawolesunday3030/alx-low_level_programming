#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 *  * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (space = 0; space < n; space++)
		{
			for (len = 0; len < n; len++)
			{
				if (len == space)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
