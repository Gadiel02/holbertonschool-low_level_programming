#include "main.h"
/**
 *_strlen - Entry point
 *@s: an argument
 *Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int num;

	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}
	return (num);
}
