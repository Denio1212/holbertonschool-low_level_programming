#include "3-calc.h"

int main(int argc, char *argv[])
{
	int result;
	int (*operator) (int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = operator(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	
	return (0);
}
