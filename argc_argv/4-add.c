#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds only two numbers
 * @argc: number of arguments
 * @argv: strings of arguments
 * Return: 1 if error, 0 if success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *s;

	if (argc < 1)
		printf("0\n");
	else
		for (i = 1; i < argc; ++i)
		{
			sum += strtol(argv[i], &s, 0);

			if ((*s >= 'A' && *s <= 'Z') ||
				(*s >= 'a' && *s <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);
	return (0);
}
