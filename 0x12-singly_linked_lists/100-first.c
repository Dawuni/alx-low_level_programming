#include <stdio.h>

void __attribute__((constructor)) initial(void);

/**
 * initial - Prints a string before the
 *   main function is executed.
 */
void initial(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
