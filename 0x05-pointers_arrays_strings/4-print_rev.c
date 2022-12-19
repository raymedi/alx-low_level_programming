#include "main.h"
/**
 * print_rev - prints string in rev
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\n')
		b++;

	for (a = b - 1; a >= 0; 1--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');


}
