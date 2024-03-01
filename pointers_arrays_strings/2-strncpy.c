#include "main.h"
/**
 *_strncpy - Entry point
 *@dest: an argument
 *@src: an argument
 *Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
