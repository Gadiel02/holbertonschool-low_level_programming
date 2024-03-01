#include "main.h"
/**
 *reverse_array - Entry point
 *@a: an argument
 *@n: an argument
 *Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j, Loki;
	int *pt = a;

	for (i = 0; i < n; i++)
	{
		pt++;
	}


	for (j = 0; j < i / 2; j++)
	{
		Loki = *pt;
		*pt = pt[j];
		pt[j] = Loki;
		pt--;
	}
}
