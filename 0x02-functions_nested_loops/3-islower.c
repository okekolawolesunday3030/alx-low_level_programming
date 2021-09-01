#include "main.h"

/**
 * main - check the code for ALX School students
 * int _islower(int c): function that checks for lowercase character
 *
 * int c: parameter is used
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
