#include "main.h"

/** 
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: int parameter used
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');
			for (index = size = 0; index < hash; index++)
				_putchar('#');
			if (hash == size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
