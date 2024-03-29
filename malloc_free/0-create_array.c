#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Entry point
 *@size: an argument
 *@c: an argument
 *Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
