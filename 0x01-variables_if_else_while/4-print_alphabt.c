#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char alph[24] = "abcdfghijklmnopqrstuvwxyz";

for (i = 0; i < 24; i++)
{
putchar(alph[i]);
}
	putchar("\n");
	return (0);
}
