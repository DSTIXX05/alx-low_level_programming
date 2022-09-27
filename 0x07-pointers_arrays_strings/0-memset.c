#include "main.h"

/**
 * *_memset - fills moemory with another buffer.
 * @s: source string
 * @b: char to copy
 * @n:number of times to copy b
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
