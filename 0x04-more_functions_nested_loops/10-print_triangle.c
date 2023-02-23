#include "main.h"

/**
 * print_traingles -entry point
 * @size: parameter valua
 * Return: size
 */

void print_triangle(int size)
{
	int p;
	int o;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 0; o <= (size - 1); o++)
		{
			for (p = 0; p = (size - 1) - o; p++)
			{
				_putchar(' ');
			}
			for (r = 0; r <= o; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
