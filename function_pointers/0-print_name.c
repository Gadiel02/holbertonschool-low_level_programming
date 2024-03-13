#include "function_pointers.h"
/**
 *print_name - print a name
 *@name: bob
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
