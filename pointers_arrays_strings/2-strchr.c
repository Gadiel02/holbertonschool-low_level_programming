#include "main.h"
/**
 *_islower - Entry point
 *@s: an argument
 *@c: an argument
 *Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
