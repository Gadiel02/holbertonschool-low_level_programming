#include"main.h"
/**
 *more_numbers - Entry point
 *
 *Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int k, f;

		for (k = 0; k <= 9; k++)
		{
			for (f = 0; f <= 14; f++)
			{
				if (f > 9)
				{
					_putchar((f / 10) + '0');
				}
				_putchar((f % 10) + '0');
			}
			_putchar('\n');
		}
}
