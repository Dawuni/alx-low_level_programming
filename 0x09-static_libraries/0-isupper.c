#include "main.h"
/**
 * _isupper - Go through uppercase letters
 * @c: check char
 *
 * Return: if else return 0, uppercase return 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
