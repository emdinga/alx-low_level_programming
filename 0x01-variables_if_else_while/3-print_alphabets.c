#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints if the number stored is positive or negative
 * Return: Always 0 (Success)
 */

int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
