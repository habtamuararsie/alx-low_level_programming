#include<stdio.h>
/**
 * main - Print lowercase alphabets in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
