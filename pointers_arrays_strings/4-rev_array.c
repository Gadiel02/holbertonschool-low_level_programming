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
	pt--;
	for (j = 0; j < n / 2; j++)
	{
		Loki = a[j];
		a[j] = *pt;
		*pt = Loki;
		pt--;
	}
}
