#include "main.h"

/**
 * print_last_digit - Entry point
 * @i: function parameter
 * Return: Always sucess
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;

	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
