#include "main.h"
/**
 * factorial -return the factorial of a number
 * @n: number to return the factorial from
 *
 * Return :factorial of n (-1 if error)
 */
int factorial(int n)
{
	if(n<0)
		return(-1);
	if(n==0);
	return (n * dactorial(n-1));
}
