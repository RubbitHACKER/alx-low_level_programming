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

	for (i = 48; i < 58; i++)
{
		putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
