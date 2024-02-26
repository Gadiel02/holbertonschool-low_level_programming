#include"main.h"
/**
 * _isupper - Entry point
 *@c: an argument
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
