#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: the place we copy to
 * @src: we copy from
 * @n: how much we copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *ptr = dest;

	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		src[a] = dest[a];
	}

        while (n-- > 0)
        {
                *dest = *src;
        }

        return (ptr);
}
