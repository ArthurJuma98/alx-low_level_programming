#include "main.h"

/**
 * _strchr - locates characters in a string
 * @s: the string we look through
 * @c: the character we look for
 *
 * Return: a pointer to the char or null
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);

	for (; *s, s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
