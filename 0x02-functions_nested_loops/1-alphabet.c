#include "main.h"

/**
 * print_alphabet - prints a word
 *
 * Description: just prints a statement
 * Return: Always(0) Success
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
