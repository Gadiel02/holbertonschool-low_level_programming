#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always o (success)
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHA = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
