#include "main.h"
/**
 * _puts - command to print a string with a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
