#include <stdio.h>
/**
 * main - prints all arguments recieved
 * @argc: the count of arguments
 * @*argv - the strings of each argument
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int length;

	for (length = 0; length < argc; length++)
	{
		printf("%s\n", argv[length]);
	}
	return (0);
}
