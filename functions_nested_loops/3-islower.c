#include"main.h"
/**
 *_islower - Entry point
 *@c: an argument
 *Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
