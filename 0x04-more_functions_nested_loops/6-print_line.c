#include "main.h"

/**
 * print_line - prints lines in the terminal.
 * @n - number of times the undescore gets printed.
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
	_putchar(95);
	i++;
	}
	_putchar('\n');
}
