#include <stdio.h>
/**
 * main - prints out the number of arguments slapped by a new line at the back
 * @argc: the nr of arguments
 * @argv: the string contained in it
 * Return: 0 success
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
