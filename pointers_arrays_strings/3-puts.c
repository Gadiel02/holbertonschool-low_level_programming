#include "main.h"
/**
 *_islower - Entry point
 *@c: an argument
 *Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
