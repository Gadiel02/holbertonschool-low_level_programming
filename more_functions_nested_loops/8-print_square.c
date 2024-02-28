#include"main.h"
/**
 *print_square - Entry point
 *@size: an argument
 *Return: Always 0 (Success)
 */

void print_square(int size)
{
	int horizontal, vertical;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (horizontal = 0; horizontal < size; horizontal++)
		{
			for (vertical = 0; vertical < size; vertical++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
