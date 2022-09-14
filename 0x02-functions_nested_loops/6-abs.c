#include <unistd.h>
#include "main.h"

/*
 * _abs - function that computes the absolute value of an integer
 * @n: The integer to check
 *
 * Return: an integer which is the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
