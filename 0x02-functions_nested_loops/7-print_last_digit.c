#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @c: paarameter
 * @l: parameter
 * Return: Always 0.
 */
int print_last_digit(int)
{
	int c, l;

	l = c % 10;
	if (c > 0 || c == 0)
	{
		_putchar (l + '0');
		return (l);
	}
	else
	{
		c = c * -1;
	_putchar (l + '0');

	return (l);
	}
}
