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
int L;
char str[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;
if (L > 6)                                                    
{                                                                  
printf("%s %d and is less than 6 and not 0\n", str, n, L);                       
}
else if (L == 0)
{
printf("%s %d and is 0\n", str, n, L);
}
else if (L > 5)
{
printf("%s %d and is greater than 5\n", str, n, L);
}
return (0);
}
