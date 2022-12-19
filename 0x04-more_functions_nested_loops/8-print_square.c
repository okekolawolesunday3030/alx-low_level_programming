#include "main.h"
/**
 * print_square- function prints # in square pattern
 * @size: parameter used
 *
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt <= size; hgt++)
		{
			for (wid = 0; wid <= size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
