#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this still prints zero to nine.
 *
 * Return: 0 as usual
 */

int main(void)
{
	int num;

	for (num = 0; num < 10;	num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
