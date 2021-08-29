#include <stdlib.h>
#include <time.h>
/**
 * main:  assigns a random number to int n everytime
 * variable n: stores different number
 * Description: main prints result when n condition is met
 * return : Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("and is 0\n", n);
}
else if (n > 5)
{
printf("and is greater than 5\n", n);
}
else if (n > 6)
{
printf("and is less than 6 and not 0\n", n);
}
printf("Last digit of %d\n", n);
return (0);
}
