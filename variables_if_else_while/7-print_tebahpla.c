#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always o (success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

