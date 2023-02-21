#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		_putchar('abcdefghijklmnopqrstuvwxyz', count);
		count++;
		_putchar('\'n);
	}
}
