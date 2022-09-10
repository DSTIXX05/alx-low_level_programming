#include <stdio.h>

/**
 * main - program starts here
 *
 * Description: This should be long
 *
 * Return: 0 as usual
 */

int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b))
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
