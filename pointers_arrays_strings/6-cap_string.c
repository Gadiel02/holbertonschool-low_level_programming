#include "main.h"
/**
 *cap_string - Entry point
 *@upe: an argument
 *Return: Always 0 (Success)
 */
char *cap_string(char *upe)
{
	int i;

	for (i = 0; upe[i] != '\0'; i++)
	{
		if (i == 0 || upe[i - 1] == ' ' || upe[i - 1] == '.'
				|| upe[i - 1] == '\n' || upe[i - 1] == '	'
				|| upe[i - 1] == ',' || upe[i - 1] == '!'
				|| upe[i - 1] == '?' || upe[i - 1] == '"'
				|| upe[i - 1] == '(' || upe[i - 1] == ')'
				|| upe[i - 1] == '{' || upe[i - 1] == '}'
				|| upe[i - 1] == ';')
		{
			if (upe[i] >= 'a' && upe[i] <= 'z')
				upe[i] -= 32;
		}
	}
	return (upe);
}
