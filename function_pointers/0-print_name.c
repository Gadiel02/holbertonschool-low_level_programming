#include "function_pointers.h"
/**
 *print_name - check the code
 *@name: bob
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}