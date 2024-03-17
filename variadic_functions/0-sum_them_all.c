#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma;
	va_list almacen;

	va_start(almacen, n);
	for (i = 0, suma = 0; i < n; i++)
		suma += va_arg(almacen, int);

	va_end(almacen);
	return (suma);

}
