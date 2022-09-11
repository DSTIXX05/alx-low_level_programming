#include <stdio.h>

/**
 * main : Entry point
 *
 * Description : this still prints 0-9
 *
 * Return: 0 as usual
 */

int main(void)
{
	int num;

	for (num = 0; num < 10;	num++)
		putchar(num);

	putchar("\n");

	return (0);
}
