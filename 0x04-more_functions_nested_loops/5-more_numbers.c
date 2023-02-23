#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: prints numbers
 * Return: Always 0
 */

void more_numbers(void)
{
	int c;
	int row;

	for (row = 0; row <= 9; row++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
