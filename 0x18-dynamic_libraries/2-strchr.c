#include "main.h"

/**
 * _strchr -main function
 * @s: 1st parameter value
 * @c: 2nd parameter value
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
