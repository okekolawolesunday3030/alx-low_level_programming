#include "main.h"

/**
 * main - Entry point
 *
 * Description:  prints Holberton
 *
 * Return: Always 0.
 */
int main(void)
{
  char c[8] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
    
  unsigned int i;

    for (i = 0; i < sizeof (c); i++)
      {
	_putchar(c[i]);
      }
    _putchar('\n');
    return (0);
}
