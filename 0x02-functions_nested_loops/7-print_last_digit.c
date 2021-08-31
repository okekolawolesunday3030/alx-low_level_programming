#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int)
{
	int c;
	int l = c % 10;
	
	if (c > 0 || c == 0)
	{
		_putchar (l + '0');
		return (l);
	}
	else
	{
		c = c * -1;
	_putchar (l + '0')

	return (l);
	}
}
