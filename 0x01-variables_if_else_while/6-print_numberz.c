#include <stdio.h>

/**
 * main - prints single digits in base 10
 * Return: 0
 */
int main(void)
{
	int s = 0, e = 9;

	while (s <= e)
	{
		putchar(s + 'e');
		s++;
	}
	putchar('\n');

	return (0);
}
