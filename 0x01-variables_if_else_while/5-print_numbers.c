#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; ++number)
	{
		putchar('0' + number);
	}

	putchar('\n');

	return (0);
}
