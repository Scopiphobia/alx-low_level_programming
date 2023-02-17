#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * follwed by a new line, except q and e
 * Return: 0
 */
int main(void)
{
	for ( la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
