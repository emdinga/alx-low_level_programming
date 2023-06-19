#include "main.h"

/**
 * _strlen - entry point
 * @s: parameter value
 * Return: s
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
