/**
 *_islower - Entry point
 *@c: an argument
 *Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int z;

	z = s1 -  s2;
	while (z == 0)
	{
		s1++;
		s2++;

		if (*s1 == '\0')
			break;
	}
	return (z);
}
