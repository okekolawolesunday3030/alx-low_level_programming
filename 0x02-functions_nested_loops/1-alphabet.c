#include "main.h"

void print_alphabet();

int main(void)
{
       	print_alphabet();

	return (0);
}
void print_alphabet()
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

}
