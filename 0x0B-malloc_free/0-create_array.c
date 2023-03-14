#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main fuction
 * @size: 1st parameter
 * @c: 2nd parameter
 * Return: arrays
 */

char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int i;

	st = malloc(sizeof(char) * size);

	if (size == 0 || st == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		st[i] = c;
	}

	return (st);
}
