char *string_toupper(char *lin)
{
	int i;
	
	for (i = 0; lin[i] != '\0';i++)
	{
		if (lin[i] >= 'a' && lin[i] <= 'z')
			lin[i] = lin[i] -32;
	}
	return (lin);
}
