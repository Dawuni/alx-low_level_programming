#include "main.h"
/**
 * _atoi - have to convert a string into an integer
 * @s: a string to use in a program
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sig = 1, a = 0;
	unsigned int unsig = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			sig *= -1;
		a++;
	}
	unsig *= sig;
	return (unsig);
}
