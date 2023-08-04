#include "main.h"
/**
 * _memcpy - a function which copies memory area
 * @dest: where memory is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int m = n;

	for (; k < m; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
