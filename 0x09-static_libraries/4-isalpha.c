#include "main.h"
/**
 * _isalpha - to let program checks for alphabetic character
 * @c: for all the character to be checked
 * Return: 1 if c is a letter and return to 0 if otherwisw
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
