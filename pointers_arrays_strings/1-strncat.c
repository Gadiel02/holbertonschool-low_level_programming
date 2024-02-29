#include "main.h"
/**
 *_strncat - Entry point
 *@dest: an argument
 *@src: an argument
 *@n: an argument
 *Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int size;
	int meta;
	int limit = 0;

	for (size = 0; dest[size] != '\0'; size++)
	{}

	for (meta = 0; src[meta] != '\0' && limit < n; meta++, limit++)
	{
		dest[size] = src[meta];
		size++;
	}
	return (dest);
}
