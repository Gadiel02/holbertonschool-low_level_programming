#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints integer
 * @separator: - print between numbers
 * @n: - number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);

		while (i < n)
		{
			printf("%d", va_arg(list, int));

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(list);
	}
	printf("\n");
}
