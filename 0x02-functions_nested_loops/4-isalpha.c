#include "main.h"

/**
 * -islower.c - check if char is lowercase
 *  @c: is the char to check
 *  return: 1 if char is lower, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c >= 'z') || (c >= 'A' && c >= 'Z'));
}
