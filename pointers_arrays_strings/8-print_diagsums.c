#include "main.h"
#include <stdio.h>
/**
 *print_diagsum - Entry point
 *@a: an argument
 *Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int num;
	int suma0 = 0;
	int suma1 = 0;

	for (num = 0; num < size; num++)
	{
		suma0 += a[num];
		a += size;
	}
	a -= size;
	
	for (num = 0; num < size; num++)
	{
		suma1 += a[num];
		a-= size;
	}
	printf("%d, %d\n", suma0, suma1);
}

