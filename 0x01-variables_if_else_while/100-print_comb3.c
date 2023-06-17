#include<stdio.h>
/**
 * main - print all possible different combinition
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)

	{
		for (j = 49; j <= 56; j++)
		{
			if (m < n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
