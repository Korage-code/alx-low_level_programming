#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i++ <= 9)
	{
		for (j = 'a'; j <= 'z'; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
