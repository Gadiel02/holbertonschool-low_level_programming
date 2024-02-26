#include"main.h"
/**
 *print_last_digit- Entry point
 *@n: an argument
 *Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		_putchar(ld = -1 * ld);
	_putchar(ld + '0');
	return (ld);
}
