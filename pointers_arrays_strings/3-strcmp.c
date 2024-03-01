/**
 *_islower - Entry point
 *@c: an argument
 *Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int z;
	int index = 0;
	
	z = s1[index] - s2[index];
	while (z == 0)
	{
		if (s1[index] == '\0')
			break;
		index++;
		z = s1[index] - s2[index];
	}
	return (z);
}
