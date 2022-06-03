#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num, i;

	for (num = 0; num < 10; num++)
	{
		for (i = 0; i < 10; i++)
		{
			if (num > i || num == i)
			{
				continue;
			}
			else
			{
				putchar(num + '0');
				putchar(i + '0');
				if (num == 8 && i == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
