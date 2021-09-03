#include "main.h"

/**
 * main - function that prints the numbers,
 */
void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c);
		_putchar('\n');
		c++;
	}
}

