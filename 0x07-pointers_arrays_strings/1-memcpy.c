#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: copy to
 * @src: copy from
 * @n: how much to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;

		*dest++;
		*src++;
	}
	return (dest);
}
