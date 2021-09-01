#include "main.h"

/**
 * main - Entry point
 *
 * Description: function print_alphabet diplays string "Holberton"
 *
 * Return: Always 0.
 */
int main(void)
{
  char c[8] = ["Holberton"];
    
  unsigned int i;

    for (i = 0; i < sizeof (c); i++)
      {
	_putchar(c[i]);
      }
    _putchar('\n');
    return (0);
}
