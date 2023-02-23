#include "main.h"

/**
 * print_line - entry point
 * @n: parameter value
 * Return: n
 */

void print_line(int n)
{
	char c = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else (n > 0)
	{
		c++;
		_putchar(c);
	}
	_putchar('\n');
}
