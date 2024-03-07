#include "main.h"
/**
 *help - Entry point
 *@entrada: el numero que utilizas para dividir
 *@random: el numero que te dan
 *Return: Always 0 (Success)
 */

int help(int entrada, int random)
{
	if (random % entrada == 0 || random < 2)
		return (0);
	if (entrada == random / 2)
		return (1);
	return (help(entrada + 1, random));
}

/**
 *is_prime_number - Entry point
 *@n: an argument
 *Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	return (help(2, n));
}
