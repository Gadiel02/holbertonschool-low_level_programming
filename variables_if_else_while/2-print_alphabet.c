#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always o (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
