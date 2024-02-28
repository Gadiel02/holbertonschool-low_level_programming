#include"main.h"
/**
 *print_diagonal - Entry point
 *@n: an argument
 *Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int sl, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sl = 0; sl < n; sl++)
		{
			for (s = 0; s < sl; s++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
