#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;
	char low[26] "abcdefghijklmnopqrstuvwxyz";
char upper[26] "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; i < 26; i++)

	{
		putchar(low[i]);
	}
for (j = 0; i < 26; i++)
{
putchar(upper[i]);
}
putchar('\n');
return (0);
}
