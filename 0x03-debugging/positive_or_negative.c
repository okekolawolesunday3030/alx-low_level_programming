#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main- Entry point
 * variable: n
 * Return: always 0
 */

void positive_or_negative(int i)
{

	if ( i < 0)
	{
		printf("%d is negaive\n", i);
	}
	else if ( i == 0)
	{
		printf("%d is zero\n",i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}

}
