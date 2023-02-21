#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints alphabets 10x
 * Return: Always 0 (sucees)
 */

void print_alphabet_x10(void)
{
	char c;
	int b = 0;

	while (b < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
