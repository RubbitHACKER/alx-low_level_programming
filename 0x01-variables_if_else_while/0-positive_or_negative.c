#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Determine if a number is positif, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positif\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else
printf("%d is zero", n);
return (0);
}
