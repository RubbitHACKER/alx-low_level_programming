#include<stdio.h>
/**
 * main - A program that prints the numbers from 0 to 9 then alphabit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char alp[6] = "abcdef";

	for (i = 0; i < 10; i++)
{
		putchar(i, alp[i]);
}
putchar('\n');
return (0);
}
