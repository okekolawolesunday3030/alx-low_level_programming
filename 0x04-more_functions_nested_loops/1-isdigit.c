#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit (0 and 9)
 * @c: int is used as data type
 * Return: 1 or otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
