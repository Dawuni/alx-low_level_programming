#include "main.h"
/**
 * _strchr - a program entry point
 * @s: type in value
 * @c: type in value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int h = 0;

	for (; s[h] >= '\0'; h++)
	{
		if (s[h] == c)
			return (&s[h]);
	}
	return (0);
}
