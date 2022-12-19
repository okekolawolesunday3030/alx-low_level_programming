#include "main.h"
#include "math.h"
/**
 * _pow_recursion- function returns the value of x raised to the power of y
 * @x: parameter used, base
 * @y: parameter used, power
 * Return: char type
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (result *= _pow_recursion(x, y - 1));

}
