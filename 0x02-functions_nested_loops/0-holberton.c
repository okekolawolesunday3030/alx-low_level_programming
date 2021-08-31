#include "main.h"

int main(void)
{
  char c[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
    
  unsigned int i;

    for (i = 0; i < sizeof (c); i++)
      {
	_putchar(c[i]);
      }
    _putchar('\n');
    return (0);
}
