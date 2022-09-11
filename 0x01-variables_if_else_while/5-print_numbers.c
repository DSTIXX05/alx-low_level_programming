#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc: This program prints numbers from 0-9
 *
 * Return: 0 as usual
 */

int main(void)
{

	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
