#include "main.h"
#include <string.h>

/**
 * _strlen_recursion- function returns the length of string
 * Return: char type
 * @s: parameter used
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = strlen(s);
	}
	return (length);
}
