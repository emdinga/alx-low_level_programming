#include "main.h"

/**
 * print_alphabet - Entry poitn
 * Description: prints in lowercases
 * Return: Always 0 (sucess)
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
	return (0);
}
