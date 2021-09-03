#include "main.h"

/** print_line - function that draws a straight line in the terminal.
 * @n: the number of lines
 * Return: n is equal to number or 0 if less than 0
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		_putchar('_');
	}
	_putchar('\n');
}
