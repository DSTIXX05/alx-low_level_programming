#include <stdio.h>

/*
 *main: The program starts here.
 *
 * Description: This program prints evey lowercase letter except q and e
 *
 * Return: 0 as usual
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
