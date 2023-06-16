#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char low[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(low[i]);
	}
putchar('\n');
return (0);
}
