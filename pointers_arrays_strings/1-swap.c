#include "main.h"

/**
 *swap_int - Entry point
 *@a: an argument
 *@b: an argument
 *Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int Lokie;

		Lokie = *a;
		*a = *b;
		*b = Lokie;
}
