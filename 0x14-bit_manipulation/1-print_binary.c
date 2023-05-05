#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: is a parameter of type unsigned long int
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	int b = 0;

	m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (m != 0)
	{
		if ((n & m) != 0)
		{
			_putchar('1');
			b = 1;
		}
		else if (b != 0)
		{
			_putchar('0');
		}
		m >>= 1;
	}
	if (b == 0)
	{
		_putchar('0');
	}
}
