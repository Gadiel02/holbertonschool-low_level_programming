#include "main.h"
/**
 *help - check inputs
 *@n: an argument
 *@target: an argument
 *Return: Always 0 (Success)z
 */

int help(int n, int target)
{
	if (n * n == target)
		return (n);
	if (n * n > target || target < 0)
		return (-1);
	return (help(n + 1, target));
}

/**
 *_sqrt_recursion - Entry point
 *@n: an argument
 *Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	return (help(1, n));
}
