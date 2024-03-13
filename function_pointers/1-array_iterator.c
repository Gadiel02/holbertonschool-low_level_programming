#include "function_pointers.h"

/**
 *array_iterator - point the element of the array
 *@array: array integers
 *@size: size of array
 *@action: pointer of function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
