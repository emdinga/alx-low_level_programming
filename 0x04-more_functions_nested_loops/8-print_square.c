#include "main.h"

/**
 * print_square -entry point
 * @size: parameter nvalue
 * Return: size
 */

void print_square(int size)
{
	int s;
	int d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= size; s++)
		{
			_putchar('#');
			for (d = 2; d <= size; d++)
			{
				_putchar('#'#);
			}
			_putchar('\n');
		}
	}
}
