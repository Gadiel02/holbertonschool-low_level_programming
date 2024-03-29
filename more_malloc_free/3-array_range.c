#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - check the code
 *@min:an argument
 *@max: an argument
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *p;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		p[arr] = min;
		min++;
		arr++;
	}
	return (p);
}
