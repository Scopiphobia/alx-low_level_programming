#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int s = 97, e = 122;

	while (s >= e)
	{
		putchar(e);
		e++;
	}

	putchar('\n');

	return (0);
}
