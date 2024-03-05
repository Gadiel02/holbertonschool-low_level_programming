#include "main.h"
/**
 *_strstr - Entry point
 *@needle: an argument
 *@haystack: an argument
 *Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *uno = haystack;
		char *dos = needle;

		while (*uno == *dos && *dos != '\0')
		{
			uno++;
			dos++;
		}
		if (*dos == '\0')
			return (haystack);
	}
	return ('\0');
}
