#include "main.h"
/**
 * _strstr - for program entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *t = needle;

		while (*e == *t && *t != '\0')
		{
			e++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}

	return (0);
}
