#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This function prints all numbers from n to 98
 * from n to 98, followed by a new line
 * @n: Starting integer to count down or up to 98
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}


	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}

	}
	else
		printf("%i", n);

	printf("\n");
}
