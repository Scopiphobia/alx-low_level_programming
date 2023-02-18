#include <stdio.h>

/**
 * main - prints single digits in base 10
 * Return: 0
 */
int main(void)
{
        int s = 97, e = 122;

        while (e >= s)
        {
                putchar(e);
                e++;
        }
        putchar('\n');

        return (0);
}
