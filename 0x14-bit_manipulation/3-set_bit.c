#include "main.h"

/**
*set_bit - sets a value of a bit at position to 1
*@n: number to be used
*@index: index to be set
*
*Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
