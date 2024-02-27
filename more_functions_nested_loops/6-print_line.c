#include"main.h"
/**
 *print_line - Entry point
 *@c: an argument
 *Return: Always 0 (Success)
 */

void print_line(int n)
{
	int un;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (un = 0; un < n; un++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
