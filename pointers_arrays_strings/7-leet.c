#include "main.h"
/**
 *leet - Entry point
 *@s: an argument
 *Return: Always 0 (Success)
 */
char *leet(char *s)
{
	char let[5] = { 'A', 'E', 'O', 'T', 'L' };
	char num[5] = { '4', '3', '0', '7', '1' };
	int a = 0, b = 0, l = 5;

		while (s[a])
		{
			b = 0;
			while (b < l)
			{
				if (s[a] == let[b] || s[a] - 32 == let[b])
				{
					s[a] = num[b];
				}
				b++;
			}
			a++;
		}
		return (s);
}
