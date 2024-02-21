#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always o (success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
			if (n <= 9)
			{
				putchar (',');
			}
			n++;
	}
	putchar ('\n');
	return (0);
}
