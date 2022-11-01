#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: amount of memory area to be copied
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
