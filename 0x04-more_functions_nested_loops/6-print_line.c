#include "main.h"

/**
 * print line - printing lines
 * @n: number of times
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar('_');
	}
	putchar('\n');
	}

}
