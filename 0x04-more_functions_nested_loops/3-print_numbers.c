#include "main.h"

/**
 * print_numbers - function that prints the numbers,
 * Return: Aways 0
 */
void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar((c % 10) + '0');
		c++;
	}
	_putchar('\n');
}
