#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fuction that will Returns a pointer to the allocated memory
 * @b: number of byte allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
