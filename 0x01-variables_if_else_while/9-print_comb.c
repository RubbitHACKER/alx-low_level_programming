#include<stdio.h>
/**
 * main - A program that prints the numbers from 0 to 9 then alphabit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
{
	putchar(i);
	if (i != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
