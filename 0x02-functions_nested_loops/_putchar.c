#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charachter cto stdout
 * @c: the character to print
 *
 * return: on succes 1.
 * on error, -1 is returned, and errno is set appropriatelly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
