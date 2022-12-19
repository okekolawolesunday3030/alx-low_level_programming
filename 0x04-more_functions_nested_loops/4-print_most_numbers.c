#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 * Return: result
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
		_putchar((c % 10) + '0');
		}
	}
	_putchar('\n');
}
