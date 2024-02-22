#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always o (success)
 */
int main(void)
{
	int num;
	int letter;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
