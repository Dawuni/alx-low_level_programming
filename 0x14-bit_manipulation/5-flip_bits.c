#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int num = 0;

	while (flipped)
	{
		if (flipped & 1)
			num++;
		flipped >>= 1;
	}
	return (num);
}
