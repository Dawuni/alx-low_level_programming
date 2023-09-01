#include "main.h"

/**
 * *get_bit - get the value of a bit at given index
 * *@n: the number of unsigned
 * *@index: index starting from 0 of the bit expected
 * *
 * *Return: The converted value of bit at index
 * */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
