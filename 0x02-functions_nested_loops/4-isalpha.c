#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to be checked.
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase and 0 otherwise.
 */

int _isalpha(int c)
{
	int b;

	b = _isalpha('H');
	_putchar(b + '0');

	b = _isalpha('o');
	_putchar(b + '0');

	b = _isalpha('1');
	_putchar(b + '0');

	b = _isalpha(';');
	_putchar(b + '0');

	_putchar('\n');

}

