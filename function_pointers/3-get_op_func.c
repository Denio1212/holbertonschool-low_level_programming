#include "3-calc.h"
/**
 * get_op_func - finds the suitable function to calculate
 * @s: the pointer the pointer to the operator
 * @Return: the proper function, or NULL
 */
int (*get_op_func(char *s))(int n, int u)
{
	op_t ops [] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	int i;
	i = 0;

	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

