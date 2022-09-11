#include <stdio.h>

/**
 * main - Prints
 *
 * Descriptionm: Prints A-Z in upper and lowercase
 * Return: 0 always
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
