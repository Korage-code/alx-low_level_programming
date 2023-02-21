#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: - number to be checked
 *
 * Return: Returns 1 and prints + if n is greater than zero,
 * Returns 0 and prints 0 if n is zero,
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int c;

	if (c > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		return (1);
	}

	if (c == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		return (0);
	}

	else if (c < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		return (-1);
	}
}
