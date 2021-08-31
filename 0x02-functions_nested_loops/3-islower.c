#include "main.h"

/**
 * main - check the code for ALX School students.
 * 
 * Description: _islower function hat checks for lowercase character
 *
 * Decription: int c parameter is used
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
