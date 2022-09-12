#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: about printing single digit numbers as CSVs
 *
 * Return: 0 as always
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			contimue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);
}
