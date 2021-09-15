#include "main.h"

/**
 * pow_recursion - function that returns the value of x raised to the power of y
 * @x: parameter used, base
 * @y: parameter used, power
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y == 0)
		return (-1);
	else if (y < - 1)
		return (1);
	
		result *= _pow_recursion(x, y - 1);

		return (result);
}
