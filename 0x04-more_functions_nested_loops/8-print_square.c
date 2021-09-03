#include "main.h"
/**
 *
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for ( hgt = 0; hgt < size; hgt++)
		{
			for ( wid = 0; wid < size; wid++)
			{
				if (hgt == size - 1)
					_putchar('#');
				continue;
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}			
