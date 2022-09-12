#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the lowercase alphabets in reverse
 *
 * Return: 0 as usual.
 *
 */

int main(void)
{
	char letter;

	for (letter = 'z'; char >= 'a'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
