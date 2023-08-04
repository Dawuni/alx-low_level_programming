#include "main.h"
/**
 * _strcmp - to compare sting values
 * @s1: type in value
 * @s2: type in value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int f = 0;

	while (s1[f] != '\0' && s2[f] != '\0')
	{
		if (s1[f] != s2[f])
		{
			return (s1[f] - s2[f]);
		}
	f++;
	}
	return (0);
}
