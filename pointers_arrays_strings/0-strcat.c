#include"main.h"
/**
 *_strcat - Entry point
 *@dest: an argument
 *@src: an argument
 *Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int size;
	int ch;

	for (size = 0; dest[size] != '\0'; size++)
	{}

	if (dest[size] == '\0')
		dest[size] = ' ';

	for (ch = 0; src[ch] != '\0'; ch++)
	{
		dest[size] = src[ch];
		size++;
	}

	dest[size++] = '\0';
	return (dest);
}

