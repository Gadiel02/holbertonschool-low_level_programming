#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num, letter;

	for (letter = 0; letter <= 9; letter++)
	{
		for (num = 97; num <= 122; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
