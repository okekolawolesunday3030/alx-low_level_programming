#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: print the size of various data type
 * Return: o if program execute prperly, else a non-zero number
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char),
"Size of a int: %d byte(s)\n", sizeof(int),
"Size of a long int: %d byte(s)\n", sizeof(long int),
"Size of a long long: %d byte(s)\n", sizeof(long long),
"Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}

