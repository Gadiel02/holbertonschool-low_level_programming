#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: an argument
 *@argv: an argument
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
