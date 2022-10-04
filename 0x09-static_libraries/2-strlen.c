#include "main.h"

/**
 * _strlen - Returns the lenght of string
 * @str: string
 *
 * Return: lenght
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
