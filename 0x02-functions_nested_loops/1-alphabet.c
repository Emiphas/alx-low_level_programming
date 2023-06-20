#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 *description: This function prints the alphabet, in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
