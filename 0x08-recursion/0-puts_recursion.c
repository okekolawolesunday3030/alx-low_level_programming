#include "main.h"

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
