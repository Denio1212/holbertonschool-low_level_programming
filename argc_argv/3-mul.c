#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: the argument number
 * @argv: the contents
 * Return: 1 if failure, 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
