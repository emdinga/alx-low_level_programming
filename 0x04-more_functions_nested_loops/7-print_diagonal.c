#include "main.h"

/**
 * print_diagonal - entry point
 * @n: parameter value
 * Return: n
 */

void print_diagonal(int n)
{
	int c;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (s = 1; s < c; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
