#include "main.h"
/**
 * _strncat - a function that concatenate two strings
 * using at most n bytes from src
 * @dest: key in value
 * @src: key in value
 * @n: key in value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int w;
	int x;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[w] = src[x];
	w++;
	x++;
	}
	dest[w] = '\0';
	return (dest);
}
