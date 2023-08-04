#include "main.h"
/**
 * _memset - A block of memory program fill with a specific value
 * @s: start an address of memory to be filled
 * @b: a desired value
 * @n: number of bytes to be changed
 *
 * Return: make change for array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
