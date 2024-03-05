#include "main.h"

/**
 *_strspn - Entry point
 *@s: an argument
 *@accept: an argument
 *Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, valor, che;

	valor = 0;
		for (i = 0; s[i] != '\0'; i++)
		{
			che = 0;

				for (n = 0; accept[n] != '\0'; n++)
				{
					if (accept[n] == s[i])
					{
						valor++;
						che = 1;
					}
				}
				if (che == 0)
					return (valor);
		}
		return (valor);
}
