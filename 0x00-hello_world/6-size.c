#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: print the size of various data type
 * Return: o if program execute prperly, else a non-zero number
*/
int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
printf("\nSize of a int: %d byte(s)", sizeof(int));
printf("\nSize of a long int: %d byte(s)", sizeof(long int));
printf("\nSize of a long long: %d byte(s)", sizeof(long long));
printf("\nSize of a float: %d byte(s)", sizeof(float));
return (0);
}

