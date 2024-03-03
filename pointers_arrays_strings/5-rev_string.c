#include "main.h"
/**
 *rev_string - Entry point
 *@s: an argument
 *Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0, lon = 0;
	char tmp;

	while (s[i++])
		lon++;
	for (i = lon - 1; i >= lon / 2; i--)
	{
		tmp = s[i];
			s[i] = s[lon - i - 1];
		s[lon - i - 1] = tmp;

	}
}
