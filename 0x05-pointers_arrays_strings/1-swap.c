#include "main.h"

/**
 * swap_int - take in two variable integers and swaps thme
 * @author Tiwa
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
