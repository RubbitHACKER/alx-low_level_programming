#include "main.h"

/**
 * -islower.c - check if char is lowercase
 *  @c: is the char to check
 *  return: 1 if char is lower, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
