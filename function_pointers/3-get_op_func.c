#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user accordingly to the operator used
 * @s: sign operator
 *
 * Return: pointer to correct function (or NULL if error)
 */

int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};
		int i = 0;

		while (i < 5)
		{
			if (!strcmp(ops[i].op, s))
				break;
			i++;
		}
		return (ops[i].f);
}
