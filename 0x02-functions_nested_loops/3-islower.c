#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: value to be checked.
 * Return: returns 1 if c is lowercase and 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
